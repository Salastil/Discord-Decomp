package i9;

import android.graphics.drawable.Animatable;
import g9.f;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class a extends f {

    /* renamed from: d, reason: collision with root package name */
    public final h9.a f10464d;

    /* renamed from: e, reason: collision with root package name */
    public long f10465e = -1;

    public a(h9.a aVar) {
        this.f10464d = aVar;
    }

    @Override // g9.f, com.facebook.drawee.controller.ControllerListener
    public final void onFinalImageSet(String id2, Object obj, Animatable animatable) {
        Intrinsics.checkNotNullParameter(id2, "id");
        long currentTimeMillis = System.currentTimeMillis() - this.f10465e;
        h9.a aVar = this.f10464d;
        aVar.f9585s = currentTimeMillis;
        aVar.invalidateSelf();
    }

    @Override // g9.f, com.facebook.drawee.controller.ControllerListener
    public final void onSubmit(String id2, Object obj) {
        Intrinsics.checkNotNullParameter(id2, "id");
        this.f10465e = System.currentTimeMillis();
    }
}
