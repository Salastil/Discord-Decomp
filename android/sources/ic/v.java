package ic;

import com.google.android.exoplayer2.Timeline;
import com.google.android.exoplayer2.analytics.AnalyticsListener$EventTime;

/* loaded from: classes3.dex */
public final class v {
    public final String a;

    /* renamed from: b, reason: collision with root package name */
    public int f10550b;

    /* renamed from: c, reason: collision with root package name */
    public long f10551c;

    /* renamed from: d, reason: collision with root package name */
    public final nd.s f10552d;

    /* renamed from: e, reason: collision with root package name */
    public boolean f10553e;

    /* renamed from: f, reason: collision with root package name */
    public boolean f10554f;

    /* renamed from: g, reason: collision with root package name */
    public final /* synthetic */ w f10555g;

    public v(w wVar, String str, int i5, nd.s sVar) {
        this.f10555g = wVar;
        this.a = str;
        this.f10550b = i5;
        this.f10551c = sVar == null ? -1L : sVar.f15169d;
        if (sVar == null || !sVar.a()) {
            return;
        }
        this.f10552d = sVar;
    }

    public final boolean a(int i5, nd.s sVar) {
        if (sVar == null) {
            return i5 == this.f10550b;
        }
        long j = sVar.f15169d;
        nd.s sVar2 = this.f10552d;
        return sVar2 == null ? !sVar.a() && j == this.f10551c : j == sVar2.f15169d && sVar.f15167b == sVar2.f15167b && sVar.f15168c == sVar2.f15168c;
    }

    public final boolean b(AnalyticsListener$EventTime analyticsListener$EventTime) {
        nd.s sVar = analyticsListener$EventTime.f5306d;
        Timeline timeline = analyticsListener$EventTime.f5304b;
        if (sVar == null) {
            return this.f10550b != analyticsListener$EventTime.f5305c;
        }
        long j = this.f10551c;
        if (j == -1) {
            return false;
        }
        if (sVar.f15169d > j) {
            return true;
        }
        nd.s sVar2 = this.f10552d;
        if (sVar2 == null) {
            return false;
        }
        int i5 = sVar2.f15167b;
        int b10 = timeline.b(sVar.a);
        int b11 = timeline.b(sVar2.a);
        if (sVar.f15169d < sVar2.f15169d || b10 < b11) {
            return false;
        }
        if (b10 > b11) {
            return true;
        }
        if (!sVar.a()) {
            int i6 = sVar.f15170e;
            return i6 == -1 || i6 > i5;
        }
        int i10 = sVar.f15167b;
        int i11 = sVar.f15168c;
        if (i10 <= i5) {
            return i10 == i5 && i11 > sVar2.f15168c;
        }
        return true;
    }

    /* JADX WARN: Code restructure failed: missing block: B:9:0x0022, code lost:
    
        if (r4 != (-1)) goto L13;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void c(int i5, nd.s sVar) {
        long j;
        if (this.f10551c == -1 && i5 == this.f10550b && sVar != null) {
            long j5 = sVar.f15169d;
            w wVar = this.f10555g;
            v vVar = (v) wVar.f10559c.get(wVar.f10562f);
            if (vVar != null) {
                j = vVar.f10551c;
            }
            j = wVar.f10563g + 1;
            if (j5 >= j) {
                this.f10551c = j5;
            }
        }
    }

    /* JADX WARN: Code restructure failed: missing block: B:4:0x000e, code lost:
    
        if (r0 < r8.o()) goto L15;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final boolean d(Timeline timeline, Timeline timeline2) {
        nd.s sVar;
        int i5 = this.f10550b;
        if (i5 < timeline.o()) {
            w wVar = this.f10555g;
            Timeline.Window window = wVar.a;
            timeline.n(i5, window);
            for (int i6 = window.L; i6 <= window.M; i6++) {
                int b10 = timeline2.b(timeline.l(i6));
                if (b10 != -1) {
                    i5 = timeline2.f(b10, wVar.f10558b, false).f9871i;
                    break;
                }
            }
            i5 = -1;
        }
        this.f10550b = i5;
        return i5 != -1 && ((sVar = this.f10552d) == null || timeline2.b(sVar.a) != -1);
    }
}
