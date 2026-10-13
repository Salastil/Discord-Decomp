package org.webrtc;

/* loaded from: classes4.dex */
public final class CandidatePairChangeEvent {
    public final int estimatedDisconnectedTimeMs;
    public final int lastDataReceivedMs;
    public final IceCandidate local;
    public final String reason;
    public final IceCandidate remote;

    @CalledByNative
    public CandidatePairChangeEvent(IceCandidate iceCandidate, IceCandidate iceCandidate2, int i5, String str, int i6) {
        this.local = iceCandidate;
        this.remote = iceCandidate2;
        this.lastDataReceivedMs = i5;
        this.reason = str;
        this.estimatedDisconnectedTimeMs = i6;
    }
}
