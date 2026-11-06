#pragma once
#include <string_view>
#include <array>
#include <vector>

namespace gd3ds
{

enum class Difficulty {
    Easy,
    Normal,
    Hard,
    Harder,
    Insane,
    Demon
};

struct SongData {
    std::string_view title;
    std::string_view artist;
};

struct MainLevelDefinition {
    int levelID;
    
    std::string_view name;
    std::string_view gmdPath;
    std::string_view songPath;
    Difficulty difficulty;

    int starCount;
    SongData songData;
};

inline std::vector<MainLevelDefinition> g_currentMainLevels;

namespace constants {

    inline constexpr auto kRobTopMainLevels = std::to_array<MainLevelDefinition>({
        {
            .levelID = 0,
            .name = "Stereo Madness",
            .gmdPath = "romfs:/main_levels/StereoMadness.gmd",
            .songPath = "romfs:/songs/StereoMadness.mp3",
            .difficulty = Difficulty::Easy,
            .starCount = 1,
            .songData = {
                .title = "Stereo Madness", 
                .artist = "ForeverBound" 
            }
        },
        {
            .levelID = 1,
            .name = "Back On Track",
            .gmdPath = "romfs:/main_levels/BackOnTrack.gmd",
            .songPath = "romfs:/songs/BackOnTrack.mp3",
            .difficulty = Difficulty::Easy,
            .starCount = 2,
            .songData = {
                .title = "Back on Track", 
                .artist = "DJVI" 
            }
        },
        {
            .levelID = 2,
            .name = "Polargeist",
            .gmdPath = "romfs:/main_levels/Polargeist.gmd",
            .songPath = "romfs:/songs/Polargeist.mp3",
            .difficulty = Difficulty::Normal,
            .starCount = 3,
            .songData = {
                .title = "Polargeist", 
                .artist = "Step" 
            }
        },
        {
            .levelID = 3,
            .name = "Dry Out",
            .gmdPath = "romfs:/main_levels/DryOut.gmd",
            .songPath = "romfs:/songs/DryOut.mp3",
            .difficulty = Difficulty::Normal,
            .starCount = 4,
            .songData = {
                .title = "Dry Out", 
                .artist = "DJVI" 
            }
        },
        {
            .levelID = 4,
            .name = "Base After Base",
            .gmdPath = "romfs:/main_levels/BaseAfterBase.gmd",
            .songPath = "romfs:/songs/BaseAfterBase.mp3",
            .difficulty = Difficulty::Hard,
            .starCount = 5,
            .songData = {
                .title = "Base after Base", 
                .artist = "DJVI" 
            }
        },
        {
            .levelID = 5,
            .name = "Cant Let Go",
            .gmdPath = "romfs:/main_levels/CantLetGo.gmd",
            .songPath = "romfs:/songs/CantLetGo.mp3",
            .difficulty = Difficulty::Hard,
            .starCount = 6,
            .songData = {
                .title = "Cant let Go",
                .artist = "DJVI" 
            }
        },
        {
            .levelID = 6,
            .name = "Jumper",
            .gmdPath = "romfs:/main_levels/Jumper.gmd",
            .songPath = "romfs:/songs/Jumper.mp3",
            .difficulty = Difficulty::Harder,
            .starCount = 7,
            .songData = {
                .title = "Jumper", 
                .artist = "Waterflame"
            }
        },
        {
            .levelID = 7,
            .name = "Time Machine",
            .gmdPath = "romfs:/main_levels/TimeMachine.gmd",
            .songPath = "romfs:/songs/TimeMachine.mp3",
            .difficulty = Difficulty::Harder,
            .starCount = 8,
            .songData = {
                .title = "Time Machine", 
                .artist = "Waterflame"
            }
        },
        {
            .levelID = 8,
            .name = "Cycles",
            .gmdPath = "romfs:/main_levels/Cycles.gmd",
            .songPath = "romfs:/songs/Cycles.mp3",
            .difficulty = Difficulty::Harder,
            .starCount = 9,
            .songData = {
                .title = "Cycles",  
                .artist = "DJVI" 
            }
        },
        {
            .levelID = 9,
            .name = "xStep",
            .gmdPath = "romfs:/main_levels/xStep.gmd",
            .songPath = "romfs:/songs/xStep.mp3",
            .difficulty = Difficulty::Insane,
            .starCount = 10,
            .songData = {
                .title = "xStep", 
                .artist = "DJVI"
            }
        },
        {
            .levelID = 10,
            .name = "Clutterfunk",
            .gmdPath = "romfs:/main_levels/Clutterfunk.gmd",
            .songPath = "romfs:/songs/Clutterfunk.mp3",
            .difficulty = Difficulty::Insane,
            .starCount = 11,
            .songData = {
                .title = "Clutterfunk", 
                .artist = "Waterflame"
            }
        },
        {
            .levelID = 11,
            .name = "Theory of Everything",
            .gmdPath = "romfs:/main_levels/TheoryofEverything.gmd",
            .songPath = "romfs:/songs/TheoryOfEverything.mp3",
            .difficulty = Difficulty::Insane,
            .starCount = 12,
            .songData = {
                .title = "Theory of Everything", 
                .artist = "DJ-Nate"
            }
        },
        {
            .levelID = 12,
            .name = "Electroman Adventures",
            .gmdPath = "romfs:/main_levels/Electroman.gmd",
            .songPath = "romfs:/songs/Electroman.mp3",
            .difficulty = Difficulty::Insane,
            .starCount = 10,
            .songData = {
                .title = "Electroman Adventures", 
                .artist = "Waterflame"
            }
        },
        {
            .levelID = 13,
            .name = "Clubstep",
            .gmdPath = "romfs:/main_levels/Clubstep.gmd",
            .songPath = "romfs:/songs/Clubstep.mp3",
            .difficulty = Difficulty::Demon,
            .starCount = 14,
            .songData = {
                .title = "Clubstep", 
                .artist = "DJ-Nate"
            }
        },
        {
            .levelID = 14,
            .name = "Electrodynamix",
            .gmdPath = "romfs:/main_levels/Electrodynamix.gmd",
            .songPath = "romfs:/songs/Electrodynamix.mp3",
            .difficulty = Difficulty::Insane,
            .starCount = 12,
            .songData = {
                .title = "Electrodynamix", 
                .artist = "DJ-Nate"
            }
        },
        {
            .levelID = 15,
            .name = "Hexagon Force",
            .gmdPath = "romfs:/main_levels/HexagonForce.gmd",
            .songPath = "romfs:/songs/HexagonForce.mp3",
            .difficulty = Difficulty::Insane,
            .starCount = 12,
            .songData = {
                .title = "Hexagon Force", 
                .artist = "Waterflame" 
            }
        },
        {
            .levelID = 16,
            .name = "Blast Processing",
            .gmdPath = "romfs:/main_levels/BlastProcessing.gmd",
            .songPath = "romfs:/songs/BlastProcessing.mp3",
            .difficulty = Difficulty::Harder,
            .starCount = 10,
            .songData = {
                .title = "Blast Processing", 
                .artist = "Waterflame"
            }
        },
        {
            .levelID = 17,
            .name = "Theory of Everything 2",
            .gmdPath = "romfs:/main_levels/TheoryofEverything2.gmd",
            .songPath = "romfs:/songs/TheoryOfEverything2.mp3",
            .difficulty = Difficulty::Demon,
            .starCount = 14,
            .songData = {
                .title = "Theory of Everything 2", 
                .artist = "DJ-Nate"
            }
        },
        {
            .levelID = 18,
            .name = "Geometrical Dominator",
            .gmdPath = "romfs:/main_levels/GeometricalDominator.gmd",
            .songPath = "romfs:/songs/GeometricalDominator.mp3",
            .difficulty = Difficulty::Harder,
            .starCount = 10,
            .songData = {
                .title = "Geometrical Dominator",
                .artist = "Waterflame"
            }
        },
        {
            .levelID = 19,
            .name = "Deadlocked",
            .gmdPath = "romfs:/main_levels/Deadlocked.gmd",
            .songPath = "romfs:/songs/Deadlocked.mp3",
            .difficulty = Difficulty::Demon,
            .starCount = 15,
            .songData = {
                .title = "Deadlocked",
                .artist = "F-777"
            }
        },
        {
            .levelID = 20,
            .name = "Fingerdash",
            .gmdPath = "romfs:/main_levels/Fingerdash.gmd",
            .songPath = "romfs:/songs/Fingerdash.mp3",
            .difficulty = Difficulty::Insane,
            .starCount = 12,
            .songData = {
                .title = "Fingerdash",
                .artist = "MDK"
            }
        }
    });

    inline constexpr auto kGDPSMainLevels = std::to_array<MainLevelDefinition>({
        {
            .levelID = 0,
            .name = "Stereo Madness",
            .gmdPath = "romfs:/main_levels/StereoMadness.gmd",
            .songPath = "romfs:/songs/StereoMadness.mp3",
            .difficulty = Difficulty::Easy,
            .starCount = 1,
            .songData = {
                .title = "Stereo Madness", 
                .artist = "ForeverBound" 
            }
        },
        {
            .levelID = 1,
            .name = "Back On Track",
            .gmdPath = "romfs:/main_levels/BackOnTrack.gmd",
            .songPath = "romfs:/songs/BackOnTrack.mp3",
            .difficulty = Difficulty::Easy,
            .starCount = 2,
            .songData = {
                .title = "Back on Track", 
                .artist = "DJVI" 
            }
        },
        {
            .levelID = 2,
            .name = "Polargeist",
            .gmdPath = "romfs:/main_levels/Polargeist.gmd",
            .songPath = "romfs:/songs/Polargeist.mp3",
            .difficulty = Difficulty::Normal,
            .starCount = 3,
            .songData = {
                .title = "Polargeist", 
                .artist = "Step" 
            }
        },
        {
            .levelID = 3,
            .name = "Dry Out",
            .gmdPath = "romfs:/main_levels/DryOut.gmd",
            .songPath = "romfs:/songs/DryOut.mp3",
            .difficulty = Difficulty::Normal,
            .starCount = 4,
            .songData = {
                .title = "Dry Out", 
                .artist = "DJVI" 
            }
        },
        {
            .levelID = 4,
            .name = "Base After Base",
            .gmdPath = "romfs:/main_levels/BaseAfterBase.gmd",
            .songPath = "romfs:/songs/BaseAfterBase.mp3",
            .difficulty = Difficulty::Hard,
            .starCount = 5,
            .songData = {
                .title = "Base after Base", 
                .artist = "DJVI" 
            }
        },
        {
            .levelID = 5,
            .name = "Cant Let Go",
            .gmdPath = "romfs:/main_levels/CantLetGo.gmd",
            .songPath = "romfs:/songs/CantLetGo.mp3",
            .difficulty = Difficulty::Hard,
            .starCount = 6,
            .songData = {
                .title = "Cant let Go",
                .artist = "DJVI" 
            }
        },
        {
            .levelID = 6,
            .name = "Jumper",
            .gmdPath = "romfs:/main_levels/Jumper.gmd",
            .songPath = "romfs:/songs/Jumper.mp3",
            .difficulty = Difficulty::Harder,
            .starCount = 7,
            .songData = {
                .title = "Jumper", 
                .artist = "Waterflame"
            }
        },
        {
            .levelID = 7,
            .name = "Time Machine",
            .gmdPath = "romfs:/main_levels/TimeMachine.gmd",
            .songPath = "romfs:/songs/TimeMachine.mp3",
            .difficulty = Difficulty::Harder,
            .starCount = 8,
            .songData = {
                .title = "Time Machine", 
                .artist = "Waterflame"
            }
        },
        {
            .levelID = 8,
            .name = "Cycles",
            .gmdPath = "romfs:/main_levels/Cycles.gmd",
            .songPath = "romfs:/songs/Cycles.mp3",
            .difficulty = Difficulty::Harder,
            .starCount = 9,
            .songData = {
                .title = "Cycles",  
                .artist = "DJVI" 
            }
        },
        {
            .levelID = 9,
            .name = "xStep",
            .gmdPath = "romfs:/main_levels/xStep.gmd",
            .songPath = "romfs:/songs/xStep.mp3",
            .difficulty = Difficulty::Insane,
            .starCount = 10,
            .songData = {
                .title = "xStep", 
                .artist = "DJVI"
            }
        },
        {
            .levelID = 10,
            .name = "Clutterfunk",
            .gmdPath = "romfs:/main_levels/Clutterfunk.gmd",
            .songPath = "romfs:/songs/Clutterfunk.mp3",
            .difficulty = Difficulty::Insane,
            .starCount = 11,
            .songData = {
                .title = "Clutterfunk", 
                .artist = "Waterflame"
            }
        },
        {
            .levelID = 11,
            .name = "Theory of Everything",
            .gmdPath = "romfs:/main_levels/TheoryofEverything.gmd",
            .songPath = "romfs:/songs/TheoryOfEverything.mp3",
            .difficulty = Difficulty::Insane,
            .starCount = 12,
            .songData = {
                .title = "Theory of Everything", 
                .artist = "DJ-Nate"
            }
        },
        {
            .levelID = 12,
            .name = "Electroman Adventures",
            .gmdPath = "romfs:/main_levels/Electroman.gmd",
            .songPath = "romfs:/songs/Electroman.mp3",
            .difficulty = Difficulty::Insane,
            .starCount = 10,
            .songData = {
                .title = "Electroman Adventures", 
                .artist = "Waterflame"
            }
        },
        {
            .levelID = 13,
            .name = "Clubstep",
            .gmdPath = "romfs:/main_levels/Clubstep.gmd",
            .songPath = "romfs:/songs/Clubstep.mp3",
            .difficulty = Difficulty::Demon,
            .starCount = 14,
            .songData = {
                .title = "Clubstep", 
                .artist = "DJ-Nate"
            }
        },
        {
            .levelID = 14,
            .name = "Electrodynamix",
            .gmdPath = "romfs:/main_levels/Electrodynamix.gmd",
            .songPath = "romfs:/songs/Electrodynamix.mp3",
            .difficulty = Difficulty::Insane,
            .starCount = 12,
            .songData = {
                .title = "Electrodynamix", 
                .artist = "DJ-Nate"
            }
        },
        {
            .levelID = 15,
            .name = "Hexagon Force",
            .gmdPath = "romfs:/main_levels/HexagonForce.gmd",
            .songPath = "romfs:/songs/HexagonForce.mp3",
            .difficulty = Difficulty::Insane,
            .starCount = 12,
            .songData = {
                .title = "Hexagon Force", 
                .artist = "Waterflame" 
            }
        },
        {
            .levelID = 16,
            .name = "Blast Processing",
            .gmdPath = "romfs:/main_levels/BlastProcessing.gmd",
            .songPath = "romfs:/songs/BlastProcessing.mp3",
            .difficulty = Difficulty::Harder,
            .starCount = 10,
            .songData = {
                .title = "Blast Processing", 
                .artist = "Waterflame"
            }
        },
        {
            .levelID = 17,
            .name = "Theory of Everything 2",
            .gmdPath = "romfs:/main_levels/TheoryofEverything2.gmd",
            .songPath = "romfs:/songs/TheoryOfEverything2.mp3",
            .difficulty = Difficulty::Demon,
            .starCount = 14,
            .songData = {
                .title = "Theory of Everything 2", 
                .artist = "DJ-Nate"
            }
        },
        {
            .levelID = 18,
            .name = "Thumper",
            .gmdPath = "romfs:/main_levels/Thumper.gmd",
            .songPath = "romfs:/songs/Thumper.mp3",
            .difficulty = Difficulty::Harder,
            .starCount = 10,
            .songData = {
                .title = "Thumper", 
                .artist = "Waterflame"
            }
        },
        {
            .levelID = 19,
            .name = "Clutterfunk 2",
            .gmdPath = "romfs:/main_levels/Clutterfunk2.gmd",
            .songPath = "romfs:/songs/Clutterfunk2.mp3",
            .difficulty = Difficulty::Demon,
            .starCount = 16,
            .songData = {
                .title = "Clutterfunk 2", 
                .artist = "Waterflame"
            }
        },
        {
            .levelID = 20,
            .name = "Aura",
            .gmdPath = "romfs:/main_levels/Aura.gmd",
            .songPath = "romfs:/songs/Aura.mp3",
            .difficulty = Difficulty::Insane,
            .starCount = 11,
            .songData = {
                .title = "Aura", 
                .artist = "Creo"
            }
        },
        {
            .levelID = 21,
            .name = "Jack Russel",
            .gmdPath = "romfs:/main_levels/JackRussel.gmd",
            .songPath = "romfs:/songs/JackRussel.mp3",
            .difficulty = Difficulty::Insane,
            .starCount = 12,
            .songData = {
                .title = "Jack Russel", 
                .artist = "Bossfight"
            }
        },
        {
            .levelID = 22,
            .name = "Streetwise",
            .gmdPath = "romfs:/main_levels/Streetwise.gmd",
            .songPath = "romfs:/songs/Streetwise.mp3",
            .difficulty = Difficulty::Insane,
            .starCount = 12,
            .songData = {
                .title = "Streetwise", 
                .artist = "Waterflame"
            }
        },
    }); 
}

}