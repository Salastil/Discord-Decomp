package zm;

import android.graphics.drawable.Drawable;
import kotlin.jvm.internal.Intrinsics;
import kotlin.reflect.KProperty;

/* loaded from: classes3.dex */
public final class b extends vo.c {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f21283d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ c f21284e;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public /* synthetic */ b(c cVar, int i5, boolean z5) {
        super(null);
        this.f21283d = i5;
        this.f21284e = cVar;
    }

    @Override // vo.c
    public final void afterChange(KProperty property, Object obj, Object obj2) {
        switch (this.f21283d) {
            case 0:
                Intrinsics.checkNotNullParameter(property, "property");
                if (((Boolean) obj).booleanValue() != ((Boolean) obj2).booleanValue()) {
                    this.f21284e.g(16);
                    break;
                }
                break;
            case 1:
                Intrinsics.checkNotNullParameter(property, "property");
                if (((Boolean) obj).booleanValue() != ((Boolean) obj2).booleanValue()) {
                    this.f21284e.g(16);
                    break;
                }
                break;
            case 2:
                Intrinsics.checkNotNullParameter(property, "property");
                if (((Boolean) obj).booleanValue() != ((Boolean) obj2).booleanValue()) {
                    this.f21284e.g(16);
                    break;
                }
                break;
            case 3:
                Intrinsics.checkNotNullParameter(property, "property");
                if (((Boolean) obj).booleanValue() != ((Boolean) obj2).booleanValue()) {
                    this.f21284e.g(16);
                    break;
                }
                break;
            case 4:
                Intrinsics.checkNotNullParameter(property, "property");
                if (((Boolean) obj).booleanValue() != ((Boolean) obj2).booleanValue()) {
                    this.f21284e.g(16);
                    break;
                }
                break;
            case 5:
                Intrinsics.checkNotNullParameter(property, "property");
                if (!Intrinsics.areEqual((bn.e) obj, (bn.e) obj2)) {
                    this.f21284e.g(32);
                    break;
                }
                break;
            case 6:
                Intrinsics.checkNotNullParameter(property, "property");
                if (((Boolean) obj).booleanValue() != ((Boolean) obj2).booleanValue()) {
                    this.f21284e.g(32);
                    break;
                }
                break;
            case 7:
                Intrinsics.checkNotNullParameter(property, "property");
                if (((an.c) obj) != ((an.c) obj2)) {
                    this.f21284e.g(2);
                    break;
                }
                break;
            case 8:
                Intrinsics.checkNotNullParameter(property, "property");
                if (((an.c) obj) != ((an.c) obj2)) {
                    this.f21284e.g(2);
                    break;
                }
                break;
            case 9:
                Intrinsics.checkNotNullParameter(property, "property");
                if (((an.c) obj) != ((an.c) obj2)) {
                    this.f21284e.g(2);
                    break;
                }
                break;
            case 10:
                Intrinsics.checkNotNullParameter(property, "property");
                if (((i) obj) != ((i) obj2)) {
                    this.f21284e.g(1);
                    break;
                }
                break;
            case 11:
                Intrinsics.checkNotNullParameter(property, "property");
                if (((an.c) obj) != ((an.c) obj2)) {
                    this.f21284e.g(2);
                    break;
                }
                break;
            case 12:
                Intrinsics.checkNotNullParameter(property, "property");
                if (!Intrinsics.areEqual((String) obj, (String) obj2)) {
                    this.f21284e.g(4);
                    break;
                }
                break;
            case 13:
                Intrinsics.checkNotNullParameter(property, "property");
                if (((Boolean) obj).booleanValue() != ((Boolean) obj2).booleanValue()) {
                    this.f21284e.g(1);
                    break;
                }
                break;
            case 14:
                Intrinsics.checkNotNullParameter(property, "property");
                if (((Boolean) obj).booleanValue() != ((Boolean) obj2).booleanValue()) {
                    this.f21284e.g(1);
                    break;
                }
                break;
            case 15:
                Intrinsics.checkNotNullParameter(property, "property");
                if (((Boolean) obj).booleanValue() != ((Boolean) obj2).booleanValue()) {
                    this.f21284e.g(8);
                    break;
                }
                break;
            case 16:
                Intrinsics.checkNotNullParameter(property, "property");
                if (!Intrinsics.areEqual((Integer) obj, (Integer) obj2)) {
                    this.f21284e.g(8);
                    break;
                }
                break;
            case 17:
                Intrinsics.checkNotNullParameter(property, "property");
                if (!Intrinsics.areEqual((Integer) obj, (Integer) obj2)) {
                    this.f21284e.g(8);
                    break;
                }
                break;
            case 18:
                Intrinsics.checkNotNullParameter(property, "property");
                if (!Intrinsics.areEqual((Integer) obj, (Integer) obj2)) {
                    this.f21284e.g(8);
                    break;
                }
                break;
            default:
                Intrinsics.checkNotNullParameter(property, "property");
                if (((Drawable) obj) != ((Drawable) obj2)) {
                    this.f21284e.g(8);
                    break;
                }
                break;
        }
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public b(bn.e eVar, c cVar) {
        super(eVar);
        this.f21283d = 5;
        this.f21284e = cVar;
    }

    /* JADX WARN: Illegal instructions before constructor call */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public b(c cVar, int i5) {
        super(r2);
        this.f21283d = i5;
        switch (i5) {
            case 1:
                Boolean bool = Boolean.FALSE;
                this.f21284e = cVar;
                super(bool);
                break;
            case 2:
                Boolean bool2 = Boolean.FALSE;
                this.f21284e = cVar;
                super(bool2);
                break;
            case 3:
                Boolean bool3 = Boolean.FALSE;
                this.f21284e = cVar;
                super(bool3);
                break;
            case 4:
                Boolean bool4 = Boolean.FALSE;
                this.f21284e = cVar;
                super(bool4);
                break;
            case 5:
            case 7:
            case 8:
            case 9:
            case 11:
            default:
                Boolean bool5 = Boolean.FALSE;
                this.f21284e = cVar;
                break;
            case 6:
                Boolean bool6 = Boolean.FALSE;
                this.f21284e = cVar;
                super(bool6);
                break;
            case 10:
                i iVar = i.f21298d;
                this.f21284e = cVar;
                super(iVar);
                break;
            case 12:
                this.f21284e = cVar;
                super("");
                break;
            case 13:
                Boolean bool7 = Boolean.FALSE;
                this.f21284e = cVar;
                super(bool7);
                break;
            case 14:
                Boolean bool8 = Boolean.FALSE;
                this.f21284e = cVar;
                super(bool8);
                break;
            case 15:
                Boolean bool9 = Boolean.FALSE;
                this.f21284e = cVar;
                super(bool9);
                break;
        }
    }
}
