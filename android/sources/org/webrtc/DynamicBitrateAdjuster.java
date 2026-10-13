package org.webrtc;

/* loaded from: classes4.dex */
class DynamicBitrateAdjuster extends BaseBitrateAdjuster {
    private static final double BITRATE_ADJUSTMENT_MAX_SCALE = 4.0d;
    private static final double BITRATE_ADJUSTMENT_SEC = 3.0d;
    private static final int BITRATE_ADJUSTMENT_STEPS = 20;
    private static final double BITS_PER_BYTE = 8.0d;
    private int bitrateAdjustmentScaleExp;
    private double deviationBytes;
    private double timeSinceLastAdjustmentMs;

    private double getBitrateAdjustmentScale() {
        return Math.pow(BITRATE_ADJUSTMENT_MAX_SCALE, this.bitrateAdjustmentScaleExp / 20.0d);
    }

    @Override // org.webrtc.BaseBitrateAdjuster, org.webrtc.BitrateAdjuster
    public int getAdjustedBitrateBps() {
        return (int) (this.targetBitrateBps * getBitrateAdjustmentScale());
    }

    @Override // org.webrtc.BaseBitrateAdjuster, org.webrtc.BitrateAdjuster
    public void reportEncodedFrame(int i5) {
        double d6 = this.targetFramerateFps;
        if (d6 == 0.0d) {
            return;
        }
        int i6 = this.targetBitrateBps;
        double d7 = (i5 - ((i6 / BITS_PER_BYTE) / d6)) + this.deviationBytes;
        this.deviationBytes = d7;
        this.timeSinceLastAdjustmentMs = (1000.0d / d6) + this.timeSinceLastAdjustmentMs;
        double d8 = i6 / BITS_PER_BYTE;
        double d10 = BITRATE_ADJUSTMENT_SEC * d8;
        double min = Math.min(d7, d10);
        this.deviationBytes = min;
        double max = Math.max(min, -d10);
        this.deviationBytes = max;
        if (this.timeSinceLastAdjustmentMs <= 3000.0d) {
            return;
        }
        if (max > d8) {
            int i10 = this.bitrateAdjustmentScaleExp - ((int) ((max / d8) + 0.5d));
            this.bitrateAdjustmentScaleExp = i10;
            this.bitrateAdjustmentScaleExp = Math.max(i10, -20);
            this.deviationBytes = d8;
        } else {
            double d11 = -d8;
            if (max < d11) {
                int i11 = this.bitrateAdjustmentScaleExp + ((int) (((-max) / d8) + 0.5d));
                this.bitrateAdjustmentScaleExp = i11;
                this.bitrateAdjustmentScaleExp = Math.min(i11, 20);
                this.deviationBytes = d11;
            }
        }
        this.timeSinceLastAdjustmentMs = 0.0d;
    }

    @Override // org.webrtc.BaseBitrateAdjuster, org.webrtc.BitrateAdjuster
    public void setTargets(int i5, double d6) {
        int i6 = this.targetBitrateBps;
        if (i6 > 0 && i5 < i6) {
            this.deviationBytes = (this.deviationBytes * i5) / i6;
        }
        super.setTargets(i5, d6);
    }
}
