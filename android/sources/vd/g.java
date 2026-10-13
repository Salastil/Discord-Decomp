package vd;

import com.google.android.exoplayer2.Format;
import hc.f0;
import hc.g1;
import java.util.LinkedList;
import ke.d0;
import nc.i;
import nd.b1;
import org.xmlpull.v1.XmlPullParser;

/* loaded from: classes3.dex */
public final class g extends d {

    /* renamed from: f, reason: collision with root package name */
    public final LinkedList f19365f;

    /* renamed from: g, reason: collision with root package name */
    public int f19366g;

    /* renamed from: h, reason: collision with root package name */
    public int f19367h;

    /* renamed from: i, reason: collision with root package name */
    public long f19368i;
    public long j;
    public long k;

    /* renamed from: l, reason: collision with root package name */
    public int f19369l;

    /* renamed from: m, reason: collision with root package name */
    public boolean f19370m;

    /* renamed from: n, reason: collision with root package name */
    public a f19371n;

    public g(String str) {
        super(null, str, "SmoothStreamingMedia");
        this.f19369l = -1;
        this.f19371n = null;
        this.f19365f = new LinkedList();
    }

    @Override // vd.d
    public final void a(Object obj) {
        if (obj instanceof b) {
            this.f19365f.add((b) obj);
        } else if (obj instanceof a) {
            ke.b.k(this.f19371n == null);
            this.f19371n = (a) obj;
        }
    }

    @Override // vd.d
    public final Object b() {
        LinkedList linkedList = this.f19365f;
        int size = linkedList.size();
        b[] bVarArr = new b[size];
        linkedList.toArray(bVarArr);
        a aVar = this.f19371n;
        if (aVar != null) {
            i iVar = new i(new nc.h(aVar.a, null, "video/mp4", aVar.f19335b));
            for (int i5 = 0; i5 < size; i5++) {
                b bVar = bVarArr[i5];
                int i6 = bVar.a;
                if (i6 == 2 || i6 == 1) {
                    Format[] formatArr = bVar.j;
                    for (int i10 = 0; i10 < formatArr.length; i10++) {
                        f0 a = formatArr[i10].a();
                        a.f9680n = iVar;
                        formatArr[i10] = new Format(a);
                    }
                }
            }
        }
        int i11 = this.f19366g;
        int i12 = this.f19367h;
        long j = this.f19368i;
        long j5 = this.j;
        long j7 = this.k;
        return new c(i11, i12, j5 == 0 ? -9223372036854775807L : d0.P(j5, 1000000L, j), j7 != 0 ? d0.P(j7, 1000000L, j) : -9223372036854775807L, this.f19369l, this.f19370m, this.f19371n, bVarArr);
    }

    @Override // vd.d
    public final void j(XmlPullParser xmlPullParser) {
        this.f19366g = d.i(xmlPullParser, "MajorVersion");
        this.f19367h = d.i(xmlPullParser, "MinorVersion");
        this.f19368i = d.h(xmlPullParser, "TimeScale", 10000000L);
        String attributeValue = xmlPullParser.getAttributeValue(null, "Duration");
        if (attributeValue == null) {
            throw new b1("Duration", 2);
        }
        try {
            this.j = Long.parseLong(attributeValue);
            this.k = d.h(xmlPullParser, "DVRWindowLength", 0L);
            this.f19369l = d.g(xmlPullParser, "LookaheadCount");
            String attributeValue2 = xmlPullParser.getAttributeValue(null, "IsLive");
            this.f19370m = attributeValue2 != null ? Boolean.parseBoolean(attributeValue2) : false;
            l(Long.valueOf(this.f19368i), "TimeScale");
        } catch (NumberFormatException e9) {
            throw g1.b(null, e9);
        }
    }
}
