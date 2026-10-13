package org.webrtc;

import org.webrtc.Camera1Session;

/* loaded from: classes4.dex */
public final /* synthetic */ class c implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f16203d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Camera1Session.AnonymousClass2 f16204e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ byte[] f16205i;

    public /* synthetic */ c(Camera1Session.AnonymousClass2 anonymousClass2, byte[] bArr, int i5) {
        this.f16203d = i5;
        this.f16204e = anonymousClass2;
        this.f16205i = bArr;
    }

    @Override // java.lang.Runnable
    public final void run() {
        switch (this.f16203d) {
            case 0:
                this.f16204e.lambda$onPreviewFrame$1(this.f16205i);
                break;
            default:
                this.f16204e.lambda$onPreviewFrame$0(this.f16205i);
                break;
        }
    }
}
