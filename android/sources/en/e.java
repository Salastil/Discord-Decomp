package en;

import fo.n;
import java.util.ArrayList;
import kotlin.jvm.internal.Intrinsics;
import kotlin.reflect.KProperty;

/* loaded from: classes3.dex */
public final class e extends vo.c {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f8171d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ f f8172e;

    /* JADX WARN: Illegal instructions before constructor call */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public e(f fVar, int i5) {
        super(r2);
        this.f8171d = i5;
        switch (i5) {
            case 1:
                d dVar = d.f8168d;
                this.f8172e = fVar;
                super(dVar);
                break;
            default:
                Boolean bool = Boolean.FALSE;
                this.f8172e = fVar;
                break;
        }
    }

    @Override // vo.c
    public final void afterChange(KProperty property, Object obj, Object obj2) {
        c preventNativeDismissChangeObserver$react_native_screens_release;
        switch (this.f8171d) {
            case 0:
                Intrinsics.checkNotNullParameter(property, "property");
                if (((Boolean) obj).booleanValue() == ((Boolean) obj2).booleanValue() || (preventNativeDismissChangeObserver$react_native_screens_release = this.f8172e.getPreventNativeDismissChangeObserver$react_native_screens_release()) == null) {
                    return;
                }
                ((b) preventNativeDismissChangeObserver$react_native_screens_release).a();
                return;
            default:
                Intrinsics.checkNotNullParameter(property, "property");
                if (((d) obj) != ((d) obj2)) {
                    f stackScreen = this.f8172e;
                    dn.i iVar = stackScreen.getStackHost$react_native_screens_release().get();
                    if (iVar != null) {
                        io.sentry.internal.debugmeta.c cVar = iVar.f7630v;
                        Intrinsics.checkNotNullParameter(stackScreen, "stackScreen");
                        int ordinal = stackScreen.getActivityMode().ordinal();
                        if (ordinal == 0) {
                            cVar.getClass();
                            Intrinsics.checkNotNullParameter(stackScreen, "stackScreen");
                            ((ArrayList) cVar.f11623i).add(new dn.d(stackScreen));
                            return;
                        } else {
                            if (ordinal != 1) {
                                throw new n();
                            }
                            cVar.getClass();
                            Intrinsics.checkNotNullParameter(stackScreen, "stackScreen");
                            ((ArrayList) cVar.f11622e).add(new dn.e(stackScreen));
                            return;
                        }
                    }
                    return;
                }
                return;
        }
    }
}
