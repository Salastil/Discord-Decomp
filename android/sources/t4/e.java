package t4;

import com.facebook.react.views.textinput.ReactEditTextInputConnectionWrapper;
import e4.r;
import java.util.List;
import java.util.Locale;

/* loaded from: classes.dex */
public final class e {
    public final List a;

    /* renamed from: b, reason: collision with root package name */
    public final l4.i f18194b;

    /* renamed from: c, reason: collision with root package name */
    public final String f18195c;

    /* renamed from: d, reason: collision with root package name */
    public final long f18196d;

    /* renamed from: e, reason: collision with root package name */
    public final int f18197e;

    /* renamed from: f, reason: collision with root package name */
    public final long f18198f;

    /* renamed from: g, reason: collision with root package name */
    public final String f18199g;

    /* renamed from: h, reason: collision with root package name */
    public final List f18200h;

    /* renamed from: i, reason: collision with root package name */
    public final r4.d f18201i;
    public final int j;
    public final int k;

    /* renamed from: l, reason: collision with root package name */
    public final int f18202l;

    /* renamed from: m, reason: collision with root package name */
    public final float f18203m;

    /* renamed from: n, reason: collision with root package name */
    public final float f18204n;

    /* renamed from: o, reason: collision with root package name */
    public final float f18205o;

    /* renamed from: p, reason: collision with root package name */
    public final float f18206p;

    /* renamed from: q, reason: collision with root package name */
    public final r4.a f18207q;

    /* renamed from: r, reason: collision with root package name */
    public final r f18208r;

    /* renamed from: s, reason: collision with root package name */
    public final r4.b f18209s;

    /* renamed from: t, reason: collision with root package name */
    public final List f18210t;

    /* renamed from: u, reason: collision with root package name */
    public final int f18211u;

    /* renamed from: v, reason: collision with root package name */
    public final boolean f18212v;

    /* renamed from: w, reason: collision with root package name */
    public final r3.g f18213w;

    /* renamed from: x, reason: collision with root package name */
    public final am.f f18214x;

    /* renamed from: y, reason: collision with root package name */
    public final int f18215y;

    public e(List list, l4.i iVar, String str, long j, int i5, long j5, String str2, List list2, r4.d dVar, int i6, int i10, int i11, float f2, float f10, float f11, float f12, r4.a aVar, r rVar, List list3, int i12, r4.b bVar, boolean z5, r3.g gVar, am.f fVar, int i13) {
        this.a = list;
        this.f18194b = iVar;
        this.f18195c = str;
        this.f18196d = j;
        this.f18197e = i5;
        this.f18198f = j5;
        this.f18199g = str2;
        this.f18200h = list2;
        this.f18201i = dVar;
        this.j = i6;
        this.k = i10;
        this.f18202l = i11;
        this.f18203m = f2;
        this.f18204n = f10;
        this.f18205o = f11;
        this.f18206p = f12;
        this.f18207q = aVar;
        this.f18208r = rVar;
        this.f18210t = list3;
        this.f18211u = i12;
        this.f18209s = bVar;
        this.f18212v = z5;
        this.f18213w = gVar;
        this.f18214x = fVar;
        this.f18215y = i13;
    }

    public final String a(String str) {
        int i5;
        StringBuilder o6 = k0.d.o(str);
        o6.append(this.f18195c);
        o6.append(ReactEditTextInputConnectionWrapper.NEWLINE_RAW_VALUE);
        long j = this.f18198f;
        l4.i iVar = this.f18194b;
        e eVar = (e) iVar.f13749i.b(j);
        if (eVar != null) {
            o6.append("\t\tParents: ");
            o6.append(eVar.f18195c);
            for (e eVar2 = (e) iVar.f13749i.b(eVar.f18198f); eVar2 != null; eVar2 = (e) iVar.f13749i.b(eVar2.f18198f)) {
                o6.append("->");
                o6.append(eVar2.f18195c);
            }
            o6.append(str);
            o6.append(ReactEditTextInputConnectionWrapper.NEWLINE_RAW_VALUE);
        }
        List list = this.f18200h;
        if (!list.isEmpty()) {
            o6.append(str);
            o6.append("\tMasks: ");
            o6.append(list.size());
            o6.append(ReactEditTextInputConnectionWrapper.NEWLINE_RAW_VALUE);
        }
        int i6 = this.j;
        if (i6 != 0 && (i5 = this.k) != 0) {
            o6.append(str);
            o6.append("\tBackground: ");
            o6.append(String.format(Locale.US, "%dx%d %X\n", Integer.valueOf(i6), Integer.valueOf(i5), Integer.valueOf(this.f18202l)));
        }
        List list2 = this.a;
        if (!list2.isEmpty()) {
            o6.append(str);
            o6.append("\tShapes:\n");
            for (Object obj : list2) {
                o6.append(str);
                o6.append("\t\t");
                o6.append(obj);
                o6.append(ReactEditTextInputConnectionWrapper.NEWLINE_RAW_VALUE);
            }
        }
        return o6.toString();
    }

    public final String toString() {
        return a("");
    }
}
