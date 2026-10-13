package k0;

import java.util.ArrayList;
import java.util.List;
import kotlin.Function;
import kotlin.Unit;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Lambda;

/* loaded from: classes.dex */
public final class h extends Lambda implements Function2 {
    public static final h E;
    public static final h F;
    public static final h G;
    public static final h H;
    public static final h I;

    /* renamed from: e, reason: collision with root package name */
    public static final h f13107e;

    /* renamed from: i, reason: collision with root package name */
    public static final h f13108i;

    /* renamed from: v, reason: collision with root package name */
    public static final h f13109v;

    /* renamed from: w, reason: collision with root package name */
    public static final h f13110w;

    /* renamed from: x, reason: collision with root package name */
    public static final h f13111x;

    /* renamed from: y, reason: collision with root package name */
    public static final h f13112y;

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f13113d;

    static {
        int i5 = 2;
        f13107e = new h(i5, 0);
        f13108i = new h(i5, 1);
        f13109v = new h(i5, 2);
        f13110w = new h(i5, 3);
        f13111x = new h(i5, 4);
        f13112y = new h(i5, 5);
        E = new h(i5, 6);
        F = new h(i5, 7);
        G = new h(i5, 8);
        H = new h(i5, 9);
        I = new h(i5, 10);
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public /* synthetic */ h(int i5, int i6) {
        super(i5);
        this.f13113d = i6;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(Object obj, Object obj2) {
        String str;
        Function function;
        switch (this.f13113d) {
            case 0:
                List list = (List) obj;
                List childValue = (List) obj2;
                Intrinsics.checkNotNullParameter(childValue, "childValue");
                if (list == null) {
                    return childValue;
                }
                ArrayList j02 = CollectionsKt.j0(list);
                j02.addAll(childValue);
                return j02;
            case 1:
                Unit unit = (Unit) obj;
                Intrinsics.checkNotNullParameter((Unit) obj2, "<anonymous parameter 1>");
                return unit;
            case 2:
                Intrinsics.checkNotNullParameter((Unit) obj2, "<anonymous parameter 1>");
                throw new IllegalStateException("merge function called on unmergeable property IsDialog. A dialog should not be a child of a clickable/focusable node.");
            case 3:
                Intrinsics.checkNotNullParameter((Unit) obj2, "<anonymous parameter 1>");
                throw new IllegalStateException("merge function called on unmergeable property IsPopup. A popup should not be a child of a clickable/focusable node.");
            case 4:
                Intrinsics.checkNotNullParameter((String) obj2, "<anonymous parameter 1>");
                throw new IllegalStateException("merge function called on unmergeable property PaneTitle.");
            case 5:
                if (obj != null) {
                    throw new ClassCastException();
                }
                obj2.getClass();
                throw new ClassCastException();
            case 6:
                String str2 = (String) obj;
                Intrinsics.checkNotNullParameter((String) obj2, "<anonymous parameter 1>");
                return str2;
            case 7:
                List list2 = (List) obj;
                List childValue2 = (List) obj2;
                Intrinsics.checkNotNullParameter(childValue2, "childValue");
                if (list2 == null) {
                    return childValue2;
                }
                ArrayList j03 = CollectionsKt.j0(list2);
                j03.addAll(childValue2);
                return j03;
            case 8:
                Float f2 = (Float) obj;
                ((Number) obj2).floatValue();
                return f2;
            case 9:
                a aVar = (a) obj;
                a childValue3 = (a) obj2;
                Intrinsics.checkNotNullParameter(childValue3, "childValue");
                if (aVar == null || (str = aVar.a) == null) {
                    str = childValue3.a;
                }
                if (aVar == null || (function = aVar.f13103b) == null) {
                    function = childValue3.f13103b;
                }
                return new a(str, function);
            default:
                return obj == null ? obj2 : obj;
        }
    }
}
