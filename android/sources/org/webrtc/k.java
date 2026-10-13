package org.webrtc;

import java.nio.ByteBuffer;

/* loaded from: classes4.dex */
public final /* synthetic */ class k implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f16227d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ ByteBuffer f16228e;

    public /* synthetic */ k(ByteBuffer byteBuffer, int i5) {
        this.f16227d = i5;
        this.f16228e = byteBuffer;
    }

    @Override // java.lang.Runnable
    public final void run() {
        switch (this.f16227d) {
            case 0:
                JniCommon.nativeFreeByteBuffer(this.f16228e);
                break;
            default:
                JniCommon.nativeFreeByteBuffer(this.f16228e);
                break;
        }
    }
}
