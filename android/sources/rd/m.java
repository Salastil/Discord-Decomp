package rd;

import com.google.android.exoplayer2.Format;
import fi.e0;
import java.util.Collections;
import java.util.List;
import ke.d0;

/* loaded from: classes3.dex */
public abstract class m {

    /* renamed from: d, reason: collision with root package name */
    public final Format f17251d;

    /* renamed from: e, reason: collision with root package name */
    public final e0 f17252e;

    /* renamed from: i, reason: collision with root package name */
    public final long f17253i;

    /* renamed from: v, reason: collision with root package name */
    public final List f17254v;

    /* renamed from: w, reason: collision with root package name */
    public final List f17255w;

    /* renamed from: x, reason: collision with root package name */
    public final List f17256x;

    /* renamed from: y, reason: collision with root package name */
    public final j f17257y;

    public m(Format format, List list, s sVar, List list2, List list3, List list4) {
        ke.b.g(!list.isEmpty());
        this.f17251d = format;
        this.f17252e = e0.k(list);
        this.f17254v = list2 == null ? Collections.EMPTY_LIST : Collections.unmodifiableList(list2);
        this.f17255w = list3;
        this.f17256x = list4;
        this.f17257y = sVar.a(this);
        this.f17253i = d0.P(sVar.f17269c, 1000000L, sVar.f17268b);
    }

    public abstract String a();

    public abstract qd.i c();

    public abstract j d();
}
