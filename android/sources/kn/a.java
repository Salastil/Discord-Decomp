package kn;

import android.graphics.drawable.Drawable;
import kotlin.jvm.internal.Intrinsics;
import kotlin.reflect.KProperty;

/* loaded from: classes3.dex */
public final class a extends vo.c {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f13454d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ b f13455e;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public /* synthetic */ a(b bVar, int i5) {
        super(null);
        this.f13454d = i5;
        this.f13455e = bVar;
    }

    @Override // vo.c
    public final void afterChange(KProperty property, Object obj, Object obj2) {
        switch (this.f13454d) {
            case 0:
                Intrinsics.checkNotNullParameter(property, "property");
                b bVar = this.f13455e;
                b.d(bVar, (String) obj, (String) obj2);
                break;
            case 1:
                Intrinsics.checkNotNullParameter(property, "property");
                if (!Intrinsics.areEqual((gn.b) obj, (gn.b) obj2)) {
                    b tabsScreen = this.f13455e;
                    c cVar = (c) tabsScreen.f13457e.get();
                    if (cVar != null) {
                        hn.f fVar = (hn.f) cVar;
                        Intrinsics.checkNotNullParameter(tabsScreen, "tabsScreen");
                        if (fVar.isAttachedToWindow() && fVar.getSelectedTab$react_native_screens_release().f13463d == tabsScreen) {
                            fVar.f10127x.f10129b = true;
                            fVar.post(new hn.c(fVar, 0));
                            break;
                        }
                    }
                }
                break;
            case 2:
                Intrinsics.checkNotNullParameter(property, "property");
                b bVar2 = this.f13455e;
                b.d(bVar2, (String) obj, (String) obj2);
                break;
            case 3:
                Intrinsics.checkNotNullParameter(property, "property");
                b bVar3 = this.f13455e;
                b.d(bVar3, (String) obj, (String) obj2);
                break;
            case 4:
                Intrinsics.checkNotNullParameter(property, "property");
                b bVar4 = this.f13455e;
                b.d(bVar4, (String) obj, (String) obj2);
                break;
            case 5:
                Intrinsics.checkNotNullParameter(property, "property");
                String str = (String) obj2;
                if (!Intrinsics.areEqual(str, (String) obj)) {
                    b bVar5 = this.f13455e;
                    bVar5.setIcon(jb.a.w(bVar5.getReactContext(), str));
                    break;
                }
                break;
            case 6:
                Intrinsics.checkNotNullParameter(property, "property");
                String str2 = (String) obj2;
                if (!Intrinsics.areEqual(str2, (String) obj)) {
                    b bVar6 = this.f13455e;
                    bVar6.setSelectedIcon(jb.a.w(bVar6.getReactContext(), str2));
                    break;
                }
                break;
            case 7:
                Intrinsics.checkNotNullParameter(property, "property");
                b bVar7 = this.f13455e;
                b.d(bVar7, (Drawable) obj, (Drawable) obj2);
                break;
            default:
                Intrinsics.checkNotNullParameter(property, "property");
                b bVar8 = this.f13455e;
                b.d(bVar8, (Drawable) obj, (Drawable) obj2);
                break;
        }
    }
}
