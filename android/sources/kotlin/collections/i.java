package kotlin.collections;

import java.util.Iterator;
import java.util.regex.Matcher;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.ranges.IntRange;
import kotlin.text.MatchGroup;

/* loaded from: classes3.dex */
public final class i extends a {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f13506d;

    /* renamed from: e, reason: collision with root package name */
    public final Object f13507e;

    public /* synthetic */ i(int i5, Object obj) {
        this.f13506d = i5;
        this.f13507e = obj;
    }

    @Override // kotlin.collections.a
    public final int a() {
        switch (this.f13506d) {
            case 0:
                return ((j) this.f13507e).c();
            case 1:
                return ((kotlin.text.m) this.f13507e).a.groupCount() + 1;
            default:
                return 0;
        }
    }

    public MatchGroup b(int i5) {
        Matcher matcher = ((kotlin.text.m) this.f13507e).a;
        IntRange i6 = yo.j.i(matcher.start(i5), matcher.end(i5));
        if (i6.f13545d < 0) {
            return null;
        }
        String group = matcher.group(i5);
        Intrinsics.checkNotNullExpressionValue(group, "group(...)");
        return new MatchGroup(group, i6);
    }

    @Override // kotlin.collections.a, java.util.Collection, java.util.List
    public final boolean contains(Object obj) {
        switch (this.f13506d) {
            case 0:
                return ((j) this.f13507e).containsValue(obj);
            case 1:
                if (obj == null ? true : obj instanceof MatchGroup) {
                    return super.contains((MatchGroup) obj);
                }
                return false;
            default:
                return ((w.b) this.f13507e).containsValue(obj);
        }
    }

    @Override // kotlin.collections.a, java.util.Collection
    public boolean isEmpty() {
        switch (this.f13506d) {
            case 1:
                return false;
            default:
                return super.isEmpty();
        }
    }

    @Override // java.util.Collection, java.lang.Iterable
    public final Iterator iterator() {
        switch (this.f13506d) {
            case 0:
                return new h(((w.c) ((j) this.f13507e).a()).iterator(), 1);
            case 1:
                return new androidx.core.view.a0(kr.s.n(CollectionsKt.C(c0.e(this)), new Function1() { // from class: kotlin.text.l
                    @Override // kotlin.jvm.functions.Function1
                    public final Object invoke(Object obj) {
                        return kotlin.collections.i.this.b(((Integer) obj).intValue());
                    }
                }));
            default:
                w.e eVar = w.e.f19592b;
                w.f[] fVarArr = new w.f[8];
                for (int i5 = 0; i5 < 8; i5++) {
                    fVarArr[i5] = new w.f(2);
                }
                return new w.d(fVarArr);
        }
    }
}
