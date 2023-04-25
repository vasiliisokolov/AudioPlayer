cmake_minimum_required (VERSION 3.8)

add_executable (AudioPlayer "AudioPlayer.cpp" "${MY_INCLUDE_DIR}/AudioPlayer.h" "${MY_INCLUDE_DIR}/Player.h" "${MY_INCLUDE_DIR}/Track.h" "Player.cpp" "Track.cpp")
target_include_directories(AudioPlayer PUBLIC ${MY_INCLUDE_DIR})