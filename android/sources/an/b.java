package an;

import a3.h;
import android.graphics.drawable.ColorDrawable;
import java.lang.ref.WeakReference;
import jq.k;
import kotlin.jvm.internal.Intrinsics;
import kotlin.reflect.KProperty;
import wm.n;
import wm.r;

/* loaded from: classes3.dex */
public final class b extends vo.c {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f680d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f681e;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public /* synthetic */ b(int i5, Object obj) {
        super(null);
        this.f680d = i5;
        this.f681e = obj;
    }

    @Override // vo.c
    public void afterChange(KProperty property, Object obj, Object obj2) {
        WeakReference<a> onStackHeaderSubviewChangeListener$react_native_screens_release;
        a aVar;
        switch (this.f680d) {
            case 0:
                Intrinsics.checkNotNullParameter(property, "property");
                if (((d) obj) != ((d) obj2) && (onStackHeaderSubviewChangeListener$react_native_screens_release = ((c) this.f681e).getOnStackHeaderSubviewChangeListener$react_native_screens_release()) != null && (aVar = onStackHeaderSubviewChangeListener$react_native_screens_release.get()) != null) {
                    ((zm.c) aVar).g(2);
                    break;
                }
                break;
            case 1:
                hn.f fVar = (hn.f) this.f681e;
                Intrinsics.checkNotNullParameter(property, "property");
                if (((Boolean) obj2).booleanValue() != ((Boolean) obj).booleanValue()) {
                    fVar.i(null);
                    fVar.getInvalidationFlags$react_native_screens_release().f10129b = true;
                    fVar.post(new h(17, fVar));
                    break;
                }
                break;
            case 2:
                Intrinsics.checkNotNullParameter(property, "property");
                Integer num = (Integer) obj2;
                if (!Intrinsics.areEqual(num, (Integer) obj)) {
                    ((in.a) this.f681e).f10965w.setBackground(num != null ? new ColorDrawable(num.intValue()) : null);
                    break;
                }
                break;
            case 3:
            default:
                super.afterChange(property, obj, obj2);
                break;
            case 4:
                Intrinsics.checkNotNullParameter(property, "property");
                if (((rm.a) obj) != ((rm.a) obj2)) {
                    ((rm.b) this.f681e).b();
                    break;
                }
                break;
            case 5:
                Intrinsics.checkNotNullParameter(property, "property");
                ((n) this.f681e).f19930h.f19950e = (r) obj2;
                break;
        }
    }

    @Override // vo.c
    public boolean beforeChange(KProperty property, Object obj, Object obj2) {
        switch (this.f680d) {
            case 3:
                Intrinsics.checkNotNullParameter(property, "property");
                if (((k) this.f681e).a) {
                    throw new IllegalStateException("Cannot modify readonly DescriptorRendererOptions");
                }
                return true;
            default:
                return super.beforeChange(property, obj, obj2);
        }
    }

    /* JADX WARN: Illegal instructions before constructor call */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public b(c cVar) {
        super(r0);
        this.f680d = 0;
        d dVar = d.f689d;
        this.f681e = cVar;
    }

    /* JADX WARN: Illegal instructions before constructor call */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public b(hn.f fVar) {
        super(r0);
        this.f680d = 1;
        Boolean bool = Boolean.FALSE;
        this.f681e = fVar;
    }

    /* JADX WARN: Illegal instructions before constructor call */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public b(rm.b bVar) {
        super(r0);
        this.f680d = 4;
        rm.a aVar = rm.a.f17407d;
        this.f681e = bVar;
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public b(Object obj, k kVar) {
        super(obj);
        this.f680d = 3;
        this.f681e = kVar;
    }
}
