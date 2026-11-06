#pragma once

#include <stdbool.h>
// #include "level_loading.h"
// #include "icons.h"
// #include "particles/particles.h"
#include "../Node.h"
// #include "trail.h"

#define STEPS_HZ 240
#define STEPS_DT (1.f / STEPS_HZ) // 1/240 seconds per physics step

#define P1_TRAIL_LENGTH 10
#define P1_TRAIL_DURATION 0.45f
#define P1_TRAIL_END_SCALE 0.8f

#define BURST_PARTICLES_DURATION 0.10f

#define DRAG_PARTICLES_FLOOR_DURATION 0.1f

#define BALL_SLOW_ROTATION 0.7f

#define MAX_ACTIONS 64

#define END_ANIMATION_TIME 1.f
#define END_ANIMATION_X_START (10.f * 30.f)

namespace gd3ds
{

enum class Gamemode {
    Cube, Ship, Ball, UFO, Wave, Robot, Spider, Swing
};

// struct SlopeData {
//     int slope_id;
//     float elapsed;
//     bool snapDown;
// };

// struct SnapData {
//     int object_id;
//     int player_frame;
//     float player_snap_diff;
//     int snapped_obj;
// };

// struct InternalHitbox {
//     float width;
//     float height;
// };

// struct P1Trail {
//     int gamemode;
//     float x;
//     float y;
//     float rot;

//     float scale;
//     float delta_scale;

//     float opacity;

//     float life;

//     bool upside_down;
//     bool active;
// };

// struct IconsDrawing {
//     int cube;
//     int ship;
//     int ball;
//     int ufo;
//     int wave;
//     int robot;
//     int spider;

//     Color p1_color;
//     Color p2_color;
//     Color glow_color;

//     bool glow;
// };

namespace constants::player {
    inline constexpr float kPhysicsFrameRate  = 60.0f;
    inline constexpr float kRotationSpeed  = 180 / (26.0f / 60.0f);
    inline constexpr float kRotationSpeedMini = 180 / (20.0f / 60.0f);

    inline constexpr float kSpeedNormal  = 0.9f;
    inline constexpr float kSpeedSlow    = 0.7f;
    inline constexpr float kSpeedFast    = 1.1f;
    inline constexpr float kSpeedFaster  = 1.3f;
    inline constexpr float kSpeedFastest = 1.6f;

    inline constexpr float kGravityNormal   = 0.958199f;
    inline constexpr double kGravitySlow    = 0.940199;
    inline constexpr double kGravityFast    = 0.957199;
    inline constexpr double kGravityFastest = 0.961199;

    inline constexpr float kJumpVelocityNormal    = 11.180032f;
    inline constexpr double kJumpVelocitySlow     = 10.620032;
    inline constexpr double kJumpVelocityFast     = 11.420032;
    inline constexpr double kJumpVelocityFastest  = 11.230032;

    inline constexpr float kTimeModNormal    = 5.770002f;
    inline constexpr double kTimeModSlow     = 5.980002;
    inline constexpr double kTimeModFast     = 5.870002;
    inline constexpr double kTimeModFastest  = 6.000002;

    inline constexpr float kStickDistanceClassic = 5.0f;
    inline constexpr float kStickDistancePlatformer = 10.0f;
    inline constexpr float kPlayerSqueezeToleranceClassic = 0.7f;
    inline constexpr float kPlayerSqueezeTolerancePlatformer = 0.8f;
    inline constexpr float kBlockInset = 0.3f;

    inline constexpr float kRespawnBlinkDuration = 0.4f;
    inline constexpr u32 kRespawnBlinks  = 4;

    inline constexpr Size kHitboxSizeDefault{30.0f, 30.0f};
    inline constexpr Size kHitboxSizeSpider{27.0f, 27.0f};
    inline constexpr Size kHitboxSizeWave{10.0f, 10.0f};
}

enum BufferState {
    None,
    Ready,
    End
};

enum class Speed {
    Slow, Normal, Fast, Faster, Fastest
};


// NOT DONE NOT DONE
class Player : public Node {
public:

    const Rect getHitbox() {
        return { position_, hitboxSize_ };
    }

    void update();
    void draw() override;

    void drawDashFile();
    

    void drawHitbox(int obj);
    void drawPlayerHitbox();
    void drawInsetHitbox();
    void drawRotatedHitbox();
    void drawHitboxTrail(int player);

    void addNewHitbox();
    void addDashExit();

    void setAnimation() // TODO DO THIS UM YEAH

    // void set_animation(int robot_anim_id);
    // void set_animation(int spider_anim_id);

    void update_p1_trail(int player_id);
    void draw_p1_trail(int player_id);

    void updateRotationDirection();

    float convertToClosestRotation(float rotation, float angle);

    bool isFlyingMode() {
        switch (mode_) {
            case Gamemode::Ship:
            case Gamemode::UFO:
            case Gamemode::Wave:
            case Gamemode::Swing:
                return true;
            default:
                return false;
        }
    }

    void playerNonFlyingLanding();
    void setBlendTimer(float timer);
    void stopDashing();   

private:
    Point velocity_{};
    Size hitboxSize_ = constants::player::kHitboxSizeDefault;

    float newYVelocity_ = 0.0f;
    float deltaPositionY_ = 0.0f;
    float platformVelocity_ = 0.0f;
    float lastPlatformVelocity_ = 0.0f;
    u16 consecutiveJumps_ = 0;

    bool onGround_ = false;
    bool onCeiling_ = false;
    bool mini_ = false;
    bool gravityFlipped_ = false;
    bool onSlope_ = false;
    bool rotationInverted_ = false;
    bool snapRotation_ = false;
    bool leftGround_ = false;
    bool isVelocityUncapped_ = false;

    int preSlopeID_ = 0;
    float cutSceneTimer_ = 0;
    int rotationDirection_ = 1;
    float cubeTargetRotation_ = 0.0f;
    float timeSinceGround_ = 0.0f;
    float ceilingInvTime_ = 0.0f;

    int slopeSlideCoyoteTime_;
    int allowWaveSlideTimer_;
    int allowHeadHitTimer_;
    int noAutoJumpTimer_;

    Gamemode mode_ = Gamemode::Cube;
    Speed speed_;
    BufferState bufferState_;
};

// PORT NOT DONE ===============================================

// inline float gravBottom() { return upside_down ? -getTop(player) : getBottom(player); }
// inline float gravTop() { return upside_down ? -getBottom(player) : getTop(player); }

// inline float gravInternalBottom() { return upside_down ? -getInternalTop(player) : getInternalBottom(player); }
// inline float gravInternalTop() { return upside_down ? -getInternalBottom(player) : getInternalTop(player); }

// inline float grav(float val) { return upside_down ? -val : val; }

// inline float obj_getTop(int object)  { 
//     return objects.y[object] + objects.height[object] / 2; 
// }
// inline float obj_getBottom(int object)  { 
//     return objects.y[object] - objects.height[object] / 2; 
// }
// inline float obj_getRight(int object)  {  
//     return objects.x[object] + objects.width[object] / 2; 
// }
// inline float obj_getLeft(int object)  { 
//     return objects.x[object] - objects.width[object] / 2; 
// }
// inline float obj_gravBottom(int object) { return upside_down ? -obj_getTop(object) : obj_getBottom(object); }
// inline float obj_gravTop(int object) { return upside_down ? -obj_getBottom(object) : obj_getTop(object); } 

// PORT NOT DONE ===============================================

// struct {

//     int gravObj_id;

//     float burst_particle_timer;

//     float cutscene_initial_x;
//     float cutscene_initial_y;

//     int frame;

//     SlopeData coyote_slope;
//     SlopeData slope_data;

//     SnapData snap_data;

//     bool velocity_override;
//     bool holding_jump_cancelled;
//     bool no_auto_jump_exempt;
//     bool dashing;
//     float dash_slope;
//     float dash_angle;
//     float dash_fire_timer;

//     bool jumped;
//     bool landed_from_jump;

//     bool buffer_ufo;

//     bool just_teleported;

//     float robot_air_time;
//     int anim_id;
//     int anim_frame;
//     float anim_timer;
//     int blend_from_anim_id;
//     int blend_from_frame;
//     float blend_from_timer;
//     float blend_timer;

//     float coyote_frames;

//     IconsDrawing player_icons;

//     int collided_block;
//     int last_collided_block;

//     bool gravity_changed_move;
// } Player;

// struct {
//     void (*func)(Player *);
// } PlayerAction;

// MOVE THIS TO PLAYER FIELDS MODE THIS TO PLAYER FIELDS
extern PlayerAction player_actions[2][MAX_ACTIONS];
extern int num_actions[2];

extern MotionTrail *trail;
extern MotionTrail trail_p1;
extern MotionTrail trail_p2;

extern MotionTrail *wave_trail;
extern MotionTrail wave_trail_p1;
extern MotionTrail wave_trail_p2;

extern ParticleSystem drag_particles[2];
extern ParticleSystem drag_particles_2[2];
extern ParticleSystem ship_fire_particles[2];
extern ParticleSystem ship_secondary_particles[2];
extern ParticleSystem secondary_particles[2];
extern ParticleSystem burst_particles[2];
extern ParticleSystem robot_fire_particles[2];
extern ParticleSystem land_particles[2];
extern ParticleSystem explosion_particles[2];
extern ParticleSystem glitter_particles;
extern ParticleSystem slow_speed_particles;
extern ParticleSystem normal_speed_particles;
extern ParticleSystem fast_speed_particles;
extern ParticleSystem faster_speed_particles;
extern ParticleSystem fastest_speed_particles;
extern ParticleSystem coin_pickup_particles;

struct KeyInput KeyInput;

extern KeyInput curr_input;
extern KeyInput curr_old_input;

extern const float player_speeds[SPEED_COUNT];
extern const float player_speed_mults[SPEED_COUNT];

}
