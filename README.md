# iOtLR

_Learning Route of my IoT and Embedded Systems Journey (ESP32, FreeRTOS, MicroPython, IoT Architectures)_

![status](https://img.shields.io/badge/status-active-brightgreen)
![platform](https://img.shields.io/badge/platform-ESP32-blue)
![language](https://img.shields.io/badge/language-C%2FC%2B%2B%2FPython-green)
![backend](https://img.shields.io/badge/backend-FastAPI%2FNode.js-orange)

---

## Description

This repository documents my complete **IoT Learning Route**, combining  
embedded systems, connectivity, backend integration, and dashboards.

It will serve as a **knowledge base and code archive** for my journey through:

- **Embedded programming** (ESP32 with ESP-IDF / FreeRTOS / Arduino-ESP32).
- **IoT protocols** (MQTT, HTTP, BLE).
- **Backend development** (FastAPI / Node.js + databases).
- **Frontend dashboards** (React, Svelte).
- **DevLabs experiments** and conceptual notes.

---

## Branch Strategy

To keep the work organized, this repo uses a **branching model**:

- **`master`**
  Main branch. Contains **stable, reviewed, and clean code/documentation**.  
  Always reflects the state of the project that is ready to be delivered or referenced.

- **`dev`**
  Development branch. Contains **ongoing work** and integrates features before merging into `master`.  
  All new features or experiments should be branched off `dev`.

- **`dWork`**
  Scratchpad branch. Used for **daily experiments, tests, or quick prototypes**.  
  Not guaranteed to be stable; changes here can be force-pushed or rebased.

---

## Repository Structure

- **content/** → Notes, theory, diagrams, documentation of IoT concepts.
- **DevLabs/** → Development labs & experiments (firmware tests, backend trials).
- **ESPSamples/** → ESP32 sample codes (WiFi, MQTT, sensors, OTA).
- **cloneResp/** -> ESP32 task labs for deliver.
- **README.md** → Main documentation (this file).

---

## Objectives

- Build a strong foundation in **embedded IoT development**.
- Practice modular and scalable code design.
- Implement **end-to-end IoT systems** (device → backend → dashboard).
- Document experiments and learning milestones.

---

## Roadmap

- [x] Create README base
- [x] Structure repository
- [ ] Add first ESP-IDF firmware sample under `ESPSamples/`.
- [ ] Create backend skeleton (FastAPI + SQLite).
- [ ] Document development environments in `content/`.
- [ ] Start a simple DevLab (ESP32 + DHT22 + MQTT → dashboard).

---

## Author

**Mateo Almeida (Macreat)**  
Course: iOt @ UNAL 2025-2  
GitHub: [@Macreat](https://github.com/Macreat)

---

## License

License: **X**  
Usage: Academic and learning purposes
