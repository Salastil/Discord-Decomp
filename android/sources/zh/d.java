package zh;

import jg.g;

/* loaded from: classes3.dex */
public final class d extends ag.a {

    /* renamed from: g, reason: collision with root package name */
    public final ai.e f21244g;

    /* renamed from: h, reason: collision with root package name */
    public final g f21245h;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ e f21246i;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public d(e eVar, g gVar) {
        super(1);
        ai.e eVar2 = new ai.e("OnRequestInstallCallback", 0);
        this.f21246i = eVar;
        attachInterface(this, "com.google.android.play.core.inappreview.protocol.IInAppReviewServiceCallback");
        this.f21244g = eVar2;
        this.f21245h = gVar;
    }
}
