package hn;

import android.graphics.drawable.Drawable;
import com.swmansion.rnscreens.gamma.tabs.screen.TabsScreenViewManager;
import kotlin.Unit;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final /* synthetic */ class d implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f10119d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ kn.b f10120e;

    public /* synthetic */ d(kn.b bVar, int i5) {
        this.f10119d = i5;
        this.f10120e = bVar;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        Unit selectedImageIconResource$lambda$2;
        Unit imageIconResource$lambda$1;
        switch (this.f10119d) {
            case 0:
                kn.e it = (kn.e) obj;
                Intrinsics.checkNotNullParameter(it, "it");
                return Boolean.valueOf(it.f13463d == this.f10120e);
            case 1:
                kn.b it2 = (kn.b) obj;
                Intrinsics.checkNotNullParameter(it2, "it");
                return Boolean.valueOf(it2 == this.f10120e);
            case 2:
                selectedImageIconResource$lambda$2 = TabsScreenViewManager.setSelectedImageIconResource$lambda$2(this.f10120e, (Drawable) obj);
                return selectedImageIconResource$lambda$2;
            default:
                imageIconResource$lambda$1 = TabsScreenViewManager.setImageIconResource$lambda$1(this.f10120e, (Drawable) obj);
                return imageIconResource$lambda$1;
        }
    }
}
