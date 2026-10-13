package org.webrtc;

/* loaded from: classes4.dex */
class BaseBitrateAdjuster implements BitrateAdjuster {
    protected int targetBitrateBps;
    protected double targetFramerateFps;

    @Override // org.webrtc.BitrateAdjuster
    public int getAdjustedBitrateBps() {
        return this.targetBitrateBps;
    }

    @Override // org.webrtc.BitrateAdjuster
    public double getAdjustedFramerateFps() {
        return this.targetFramerateFps;
    }

    @Override // org.webrtc.BitrateAdjuster
    public void reportEncodedFrame(int i5) {
    }

    @Override // org.webrtc.BitrateAdjuster
    public void setTargets(int i5, double d6) {
        this.targetBitrateBps = i5;
        this.targetFramerateFps = d6;
    }
}
