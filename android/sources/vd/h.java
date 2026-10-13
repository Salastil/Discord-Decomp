package vd;

import com.google.android.exoplayer2.Format;
import hc.g1;
import java.util.ArrayList;
import java.util.LinkedList;
import ke.d0;
import nd.b1;
import org.webrtc.MediaStreamTrack;
import org.xmlpull.v1.XmlPullParser;

/* loaded from: classes3.dex */
public final class h extends d {

    /* renamed from: f, reason: collision with root package name */
    public final String f19372f;

    /* renamed from: g, reason: collision with root package name */
    public final LinkedList f19373g;

    /* renamed from: h, reason: collision with root package name */
    public int f19374h;

    /* renamed from: i, reason: collision with root package name */
    public String f19375i;
    public long j;
    public String k;

    /* renamed from: l, reason: collision with root package name */
    public String f19376l;

    /* renamed from: m, reason: collision with root package name */
    public int f19377m;

    /* renamed from: n, reason: collision with root package name */
    public int f19378n;

    /* renamed from: o, reason: collision with root package name */
    public int f19379o;

    /* renamed from: p, reason: collision with root package name */
    public int f19380p;

    /* renamed from: q, reason: collision with root package name */
    public String f19381q;

    /* renamed from: r, reason: collision with root package name */
    public ArrayList f19382r;

    /* renamed from: s, reason: collision with root package name */
    public long f19383s;

    public h(d dVar, String str) {
        super(dVar, str, "StreamIndex");
        this.f19372f = str;
        this.f19373g = new LinkedList();
    }

    @Override // vd.d
    public final void a(Object obj) {
        if (obj instanceof Format) {
            this.f19373g.add((Format) obj);
        }
    }

    @Override // vd.d
    public final Object b() {
        LinkedList linkedList = this.f19373g;
        Format[] formatArr = new Format[linkedList.size()];
        linkedList.toArray(formatArr);
        String str = this.f19376l;
        int i5 = this.f19374h;
        String str2 = this.f19375i;
        long j = this.j;
        String str3 = this.k;
        int i6 = this.f19377m;
        int i10 = this.f19378n;
        int i11 = this.f19379o;
        int i12 = this.f19380p;
        String str4 = this.f19381q;
        ArrayList arrayList = this.f19382r;
        long j5 = this.f19383s;
        int i13 = d0.a;
        int size = arrayList.size();
        long[] jArr = new long[size];
        if (j >= 1000000 && j % 1000000 == 0) {
            long j7 = j / 1000000;
            for (int i14 = 0; i14 < size; i14++) {
                jArr[i14] = ((Long) arrayList.get(i14)).longValue() / j7;
            }
        } else if (j >= 1000000 || 1000000 % j != 0) {
            double d6 = 1000000 / j;
            int i15 = 0;
            while (i15 < size) {
                double d7 = d6;
                jArr[i15] = (long) (((Long) arrayList.get(i15)).longValue() * d7);
                i15++;
                d6 = d7;
            }
        } else {
            long j10 = 1000000 / j;
            for (int i16 = 0; i16 < size; i16++) {
                jArr[i16] = ((Long) arrayList.get(i16)).longValue() * j10;
            }
        }
        return new b(this.f19372f, str, i5, str2, j, str3, i6, i10, i11, i12, str4, formatArr, arrayList, jArr, d0.P(j5, 1000000L, j));
    }

    @Override // vd.d
    public final boolean d(String str) {
        return "c".equals(str);
    }

    @Override // vd.d
    public final void j(XmlPullParser xmlPullParser) {
        int i5 = 1;
        if (!"c".equals(xmlPullParser.getName())) {
            String attributeValue = xmlPullParser.getAttributeValue(null, "Type");
            if (attributeValue == null) {
                throw new b1("Type", 2);
            }
            if (!MediaStreamTrack.AUDIO_TRACK_KIND.equalsIgnoreCase(attributeValue)) {
                if (MediaStreamTrack.VIDEO_TRACK_KIND.equalsIgnoreCase(attributeValue)) {
                    i5 = 2;
                } else {
                    if (!"text".equalsIgnoreCase(attributeValue)) {
                        throw g1.b("Invalid key value[" + attributeValue + "]", null);
                    }
                    i5 = 3;
                }
            }
            this.f19374h = i5;
            l(Integer.valueOf(i5), "Type");
            if (this.f19374h == 3) {
                String attributeValue2 = xmlPullParser.getAttributeValue(null, "Subtype");
                if (attributeValue2 == null) {
                    throw new b1("Subtype", 2);
                }
                this.f19375i = attributeValue2;
            } else {
                this.f19375i = xmlPullParser.getAttributeValue(null, "Subtype");
            }
            l(this.f19375i, "Subtype");
            String attributeValue3 = xmlPullParser.getAttributeValue(null, "Name");
            this.k = attributeValue3;
            l(attributeValue3, "Name");
            String attributeValue4 = xmlPullParser.getAttributeValue(null, "Url");
            if (attributeValue4 == null) {
                throw new b1("Url", 2);
            }
            this.f19376l = attributeValue4;
            this.f19377m = d.g(xmlPullParser, "MaxWidth");
            this.f19378n = d.g(xmlPullParser, "MaxHeight");
            this.f19379o = d.g(xmlPullParser, "DisplayWidth");
            this.f19380p = d.g(xmlPullParser, "DisplayHeight");
            String attributeValue5 = xmlPullParser.getAttributeValue(null, "Language");
            this.f19381q = attributeValue5;
            l(attributeValue5, "Language");
            long g6 = d.g(xmlPullParser, "TimeScale");
            this.j = g6;
            if (g6 == -1) {
                this.j = ((Long) c("TimeScale")).longValue();
            }
            this.f19382r = new ArrayList();
            return;
        }
        int size = this.f19382r.size();
        long h6 = d.h(xmlPullParser, "t", -9223372036854775807L);
        if (h6 == -9223372036854775807L) {
            if (size == 0) {
                h6 = 0;
            } else {
                if (this.f19383s == -1) {
                    throw g1.b("Unable to infer start time", null);
                }
                h6 = this.f19383s + ((Long) this.f19382r.get(size - 1)).longValue();
            }
        }
        this.f19382r.add(Long.valueOf(h6));
        this.f19383s = d.h(xmlPullParser, "d", -9223372036854775807L);
        long h7 = d.h(xmlPullParser, "r", 1L);
        if (h7 > 1 && this.f19383s == -9223372036854775807L) {
            throw g1.b("Repeated chunk with unspecified duration", null);
        }
        while (true) {
            long j = i5;
            if (j >= h7) {
                return;
            }
            this.f19382r.add(Long.valueOf((this.f19383s * j) + h6));
            i5++;
        }
    }
}
