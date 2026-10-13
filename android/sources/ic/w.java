package ic;

import com.google.android.exoplayer2.Timeline;
import com.google.android.exoplayer2.analytics.AnalyticsListener$EventTime;
import hc.s1;
import java.util.HashMap;
import java.util.Iterator;
import java.util.Random;
import ke.d0;
import kotlin.jvm.internal.LongCompanionObject;

/* loaded from: classes3.dex */
public final class w {

    /* renamed from: h, reason: collision with root package name */
    public static final i7.a f10556h = new i7.a(2);

    /* renamed from: i, reason: collision with root package name */
    public static final Random f10557i = new Random();

    /* renamed from: d, reason: collision with root package name */
    public Object f10560d;

    /* renamed from: f, reason: collision with root package name */
    public String f10562f;
    public final Timeline.Window a = new Timeline.Window();

    /* renamed from: b, reason: collision with root package name */
    public final s1 f10558b = new s1();

    /* renamed from: c, reason: collision with root package name */
    public final HashMap f10559c = new HashMap();

    /* renamed from: e, reason: collision with root package name */
    public Timeline f10561e = Timeline.f5288d;

    /* renamed from: g, reason: collision with root package name */
    public long f10563g = -1;

    public final synchronized boolean a(AnalyticsListener$EventTime analyticsListener$EventTime, String str) {
        v vVar = (v) this.f10559c.get(str);
        if (vVar == null) {
            return false;
        }
        vVar.c(analyticsListener$EventTime.f5305c, analyticsListener$EventTime.f5306d);
        return vVar.a(analyticsListener$EventTime.f5305c, analyticsListener$EventTime.f5306d);
    }

    public final void b(v vVar) {
        long j = vVar.f10551c;
        if (j != -1) {
            this.f10563g = j;
        }
        this.f10562f = null;
    }

    /* JADX WARN: Type inference failed for: r2v1, types: [ic.y, java.lang.Object] */
    public final synchronized void c(AnalyticsListener$EventTime analyticsListener$EventTime) {
        ?? r22;
        try {
            String str = this.f10562f;
            if (str != null) {
                v vVar = (v) this.f10559c.get(str);
                vVar.getClass();
                b(vVar);
            }
            Iterator it = this.f10559c.values().iterator();
            while (it.hasNext()) {
                v vVar2 = (v) it.next();
                it.remove();
                if (vVar2.f10553e && (r22 = this.f10560d) != 0) {
                    r22.b(analyticsListener$EventTime, vVar2.a, false);
                }
            }
        } catch (Throwable th2) {
            throw th2;
        }
    }

    public final v d(int i5, nd.s sVar) {
        HashMap hashMap = this.f10559c;
        v vVar = null;
        long j = LongCompanionObject.MAX_VALUE;
        for (v vVar2 : hashMap.values()) {
            vVar2.c(i5, sVar);
            if (vVar2.a(i5, sVar)) {
                long j5 = vVar2.f10551c;
                if (j5 == -1 || j5 < j) {
                    vVar = vVar2;
                    j = j5;
                } else if (j5 == j) {
                    int i6 = d0.a;
                    if (vVar.f10552d != null && vVar2.f10552d != null) {
                        vVar = vVar2;
                    }
                }
            }
        }
        if (vVar != null) {
            return vVar;
        }
        String str = (String) f10556h.get();
        v vVar3 = new v(this, str, i5, sVar);
        hashMap.put(str, vVar3);
        return vVar3;
    }

    public final synchronized String e(Timeline timeline, nd.s sVar) {
        return d(timeline.g(sVar.a, this.f10558b).f9871i, sVar).a;
    }

    /* JADX WARN: Type inference failed for: r0v6, types: [ic.y, java.lang.Object] */
    public final void f(AnalyticsListener$EventTime analyticsListener$EventTime) {
        nd.s sVar;
        Timeline timeline = analyticsListener$EventTime.f5304b;
        int i5 = analyticsListener$EventTime.f5305c;
        nd.s sVar2 = analyticsListener$EventTime.f5306d;
        boolean p3 = timeline.p();
        HashMap hashMap = this.f10559c;
        if (p3) {
            String str = this.f10562f;
            if (str != null) {
                v vVar = (v) hashMap.get(str);
                vVar.getClass();
                b(vVar);
                return;
            }
            return;
        }
        v vVar2 = (v) hashMap.get(this.f10562f);
        this.f10562f = d(i5, sVar2).a;
        g(analyticsListener$EventTime);
        if (sVar2 != null) {
            long j = sVar2.f15169d;
            if (sVar2.a()) {
                if (vVar2 != null && vVar2.f10551c == j && (sVar = vVar2.f10552d) != null && sVar.f15167b == sVar2.f15167b && sVar.f15168c == sVar2.f15168c) {
                    return;
                }
                this.f10560d.a(d(i5, new nd.s(j, sVar2.a)).a);
            }
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:18:0x0038 A[DONT_GENERATE] */
    /* JADX WARN: Removed duplicated region for block: B:20:0x003a A[Catch: all -> 0x0054, TRY_ENTER, TryCatch #0 {, blocks: (B:4:0x0005, B:9:0x0014, B:11:0x0018, B:13:0x0028, B:20:0x003a, B:22:0x0046, B:24:0x004c, B:28:0x002f, B:30:0x0057, B:32:0x0063, B:33:0x0067, B:35:0x006c, B:37:0x0072, B:39:0x0089, B:40:0x00db, B:42:0x00df, B:43:0x00e9, B:45:0x00f3, B:47:0x00f7), top: B:3:0x0005 }] */
    /* JADX WARN: Type inference failed for: r3v10, types: [ic.y, java.lang.Object] */
    /* JADX WARN: Type inference failed for: r3v8, types: [ic.y, java.lang.Object] */
    /* JADX WARN: Type inference failed for: r4v5, types: [ic.y, java.lang.Object] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final synchronized void g(AnalyticsListener$EventTime analyticsListener$EventTime) {
        long j;
        this.f10560d.getClass();
        if (analyticsListener$EventTime.f5304b.p()) {
            return;
        }
        nd.s sVar = analyticsListener$EventTime.f5306d;
        if (sVar != null) {
            long j5 = sVar.f15169d;
            v vVar = (v) this.f10559c.get(this.f10562f);
            if (vVar != null) {
                j = vVar.f10551c;
                if (j != -1) {
                    if (j5 >= j) {
                        return;
                    }
                    v vVar2 = (v) this.f10559c.get(this.f10562f);
                    if (vVar2 != null && vVar2.f10551c == -1 && vVar2.f10550b != analyticsListener$EventTime.f5305c) {
                        return;
                    }
                }
            }
            j = this.f10563g + 1;
            if (j5 >= j) {
            }
        }
        v d6 = d(analyticsListener$EventTime.f5305c, analyticsListener$EventTime.f5306d);
        if (this.f10562f == null) {
            this.f10562f = d6.a;
        }
        nd.s sVar2 = analyticsListener$EventTime.f5306d;
        if (sVar2 != null && sVar2.a()) {
            nd.s sVar3 = analyticsListener$EventTime.f5306d;
            nd.s sVar4 = new nd.s(sVar3.a, sVar3.f15169d, sVar3.f15167b);
            v d7 = d(analyticsListener$EventTime.f5305c, sVar4);
            if (!d7.f10553e) {
                d7.f10553e = true;
                analyticsListener$EventTime.f5304b.g(analyticsListener$EventTime.f5306d.a, this.f10558b);
                this.f10560d.d(new AnalyticsListener$EventTime(analyticsListener$EventTime.a, analyticsListener$EventTime.f5304b, analyticsListener$EventTime.f5305c, sVar4, Math.max(0L, d0.U(this.f10558b.d(analyticsListener$EventTime.f5306d.f15167b)) + d0.U(this.f10558b.f9873w)), analyticsListener$EventTime.f5308f, analyticsListener$EventTime.f5309g, analyticsListener$EventTime.f5310h, analyticsListener$EventTime.f5311i, analyticsListener$EventTime.j), d7.a);
            }
        }
        if (!d6.f10553e) {
            d6.f10553e = true;
            this.f10560d.d(analyticsListener$EventTime, d6.a);
        }
        if (d6.a.equals(this.f10562f) && !d6.f10554f) {
            d6.f10554f = true;
            this.f10560d.c(analyticsListener$EventTime, d6.a);
        }
    }

    /* JADX WARN: Type inference failed for: r4v4, types: [ic.y, java.lang.Object] */
    public final synchronized void h(AnalyticsListener$EventTime analyticsListener$EventTime, int i5) {
        try {
            this.f10560d.getClass();
            boolean z5 = i5 == 0;
            Iterator it = this.f10559c.values().iterator();
            while (it.hasNext()) {
                v vVar = (v) it.next();
                if (vVar.b(analyticsListener$EventTime)) {
                    it.remove();
                    if (vVar.f10553e) {
                        boolean equals = vVar.a.equals(this.f10562f);
                        boolean z6 = z5 && equals && vVar.f10554f;
                        if (equals) {
                            b(vVar);
                        }
                        this.f10560d.b(analyticsListener$EventTime, vVar.a, z6);
                    }
                }
            }
            f(analyticsListener$EventTime);
        } catch (Throwable th2) {
            throw th2;
        }
    }

    /* JADX WARN: Type inference failed for: r3v5, types: [ic.y, java.lang.Object] */
    public final synchronized void i(AnalyticsListener$EventTime analyticsListener$EventTime) {
        try {
            this.f10560d.getClass();
            Timeline timeline = this.f10561e;
            this.f10561e = analyticsListener$EventTime.f5304b;
            Iterator it = this.f10559c.values().iterator();
            while (it.hasNext()) {
                v vVar = (v) it.next();
                if (vVar.d(timeline, this.f10561e) && !vVar.b(analyticsListener$EventTime)) {
                }
                it.remove();
                if (vVar.f10553e) {
                    if (vVar.a.equals(this.f10562f)) {
                        b(vVar);
                    }
                    this.f10560d.b(analyticsListener$EventTime, vVar.a, false);
                }
            }
            f(analyticsListener$EventTime);
        } catch (Throwable th2) {
            throw th2;
        }
    }
}
