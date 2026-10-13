package ic;

import android.util.Pair;
import com.discord.media_player.MediaPlayer;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import com.google.android.exoplayer2.Format;
import com.google.android.exoplayer2.Player;
import com.google.android.exoplayer2.Timeline;
import com.google.android.exoplayer2.Tracks;
import com.google.android.exoplayer2.analytics.AnalyticsListener$EventTime;
import com.google.android.exoplayer2.analytics.AnalyticsListener$Events;
import com.google.android.exoplayer2.analytics.PlaybackStats;
import com.google.android.exoplayer2.source.LoadEventInfo;
import com.google.android.exoplayer2.source.MediaLoadData;
import com.google.android.exoplayer2.video.VideoSize;
import hc.f0;
import hc.s1;
import java.io.IOException;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import ke.d0;

/* loaded from: classes3.dex */
public final class a0 implements b, y {
    public final w a;

    /* renamed from: b, reason: collision with root package name */
    public final HashMap f10466b;

    /* renamed from: c, reason: collision with root package name */
    public final HashMap f10467c;

    /* renamed from: d, reason: collision with root package name */
    public final app.rive.runtime.kotlin.core.a f10468d;

    /* renamed from: e, reason: collision with root package name */
    public final s1 f10469e;

    /* renamed from: f, reason: collision with root package name */
    public PlaybackStats f10470f;

    /* renamed from: g, reason: collision with root package name */
    public String f10471g;

    /* renamed from: h, reason: collision with root package name */
    public long f10472h;

    /* renamed from: i, reason: collision with root package name */
    public int f10473i;
    public int j;
    public Exception k;

    /* renamed from: l, reason: collision with root package name */
    public long f10474l;

    /* renamed from: m, reason: collision with root package name */
    public long f10475m;

    /* renamed from: n, reason: collision with root package name */
    public Format f10476n;

    /* renamed from: o, reason: collision with root package name */
    public Format f10477o;

    /* renamed from: p, reason: collision with root package name */
    public VideoSize f10478p;

    public a0(app.rive.runtime.kotlin.core.a aVar) {
        this.f10468d = aVar;
        w wVar = new w();
        this.a = wVar;
        this.f10466b = new HashMap();
        this.f10467c = new HashMap();
        this.f10470f = PlaybackStats.O;
        this.f10469e = new s1();
        this.f10478p = VideoSize.f5575w;
        wVar.f10560d = this;
    }

    @Override // ic.y
    public final void a(String str) {
        z zVar = (z) this.f10466b.get(str);
        zVar.getClass();
        zVar.K = true;
        zVar.I = false;
    }

    @Override // ic.y
    public final void b(AnalyticsListener$EventTime analyticsListener$EventTime, String str, boolean z5) {
        z zVar = (z) this.f10466b.remove(str);
        zVar.getClass();
        AnalyticsListener$EventTime analyticsListener$EventTime2 = (AnalyticsListener$EventTime) this.f10467c.remove(str);
        analyticsListener$EventTime2.getClass();
        str.equals(this.f10471g);
        int i5 = 11;
        if (zVar.G != 11 && !z5) {
            i5 = 15;
        }
        long j = analyticsListener$EventTime.a;
        zVar.c(j);
        zVar.b(j);
        zVar.f(analyticsListener$EventTime, i5);
        List list = zVar.f10587b;
        List list2 = zVar.f10590e;
        List list3 = zVar.f10589d;
        long[] jArr = zVar.a;
        List list4 = zVar.f10588c;
        int i6 = (zVar.f10595l || !zVar.j) ? 1 : 0;
        long j5 = i6 != 0 ? -9223372036854775807L : jArr[2];
        int i10 = jArr[1] > 0 ? 1 : 0;
        long j7 = zVar.f10594i;
        boolean z6 = zVar.J;
        int i11 = !zVar.j ? 1 : 0;
        boolean z7 = zVar.k;
        int i12 = i6 ^ 1;
        int i13 = zVar.f10596m;
        int i14 = zVar.f10597n;
        int i15 = zVar.f10598o;
        int i16 = zVar.f10599p;
        long j10 = zVar.f10600q;
        boolean z8 = zVar.f10593h;
        long j11 = zVar.f10604u;
        long j12 = zVar.f10605v;
        long j13 = zVar.f10606w;
        long j14 = zVar.f10607x;
        long j15 = zVar.f10608y;
        long j16 = zVar.f10609z;
        int i17 = zVar.f10601r;
        int i18 = i17 == -1 ? 0 : 1;
        long j17 = zVar.f10602s;
        int i19 = j17 == -1 ? 0 : 1;
        long j18 = zVar.f10603t;
        int i20 = j18 == -1 ? 0 : 1;
        long j19 = zVar.A;
        long j20 = zVar.B;
        long j21 = zVar.C;
        long j22 = zVar.D;
        int i21 = zVar.E;
        PlaybackStats playbackStats = new PlaybackStats(1, jArr, list, list4, j7, z6 ? 1 : 0, i11, z7 ? 1 : 0, i10, j5, i12, i13, i14, i15, i16, j10, z8 ? 1 : 0, list3, list2, j11, j12, j13, j14, j15, j16, i18, i19, i17, j17, i20, j18, j19, j20, j21, j22, i21 > 0 ? 1 : 0, i21, zVar.F, zVar.f10591f, zVar.f10592g);
        this.f10470f = PlaybackStats.a(this.f10470f, playbackStats);
        MediaPlayer._init_$lambda$3((MediaPlayer) this.f10468d.f2613e, analyticsListener$EventTime2, playbackStats);
    }

    @Override // ic.y
    public final void c(AnalyticsListener$EventTime analyticsListener$EventTime, String str) {
        z zVar = (z) this.f10466b.get(str);
        zVar.getClass();
        zVar.J = true;
    }

    @Override // ic.y
    public final void d(AnalyticsListener$EventTime analyticsListener$EventTime, String str) {
        this.f10466b.put(str, new z(analyticsListener$EventTime));
        this.f10467c.put(str, analyticsListener$EventTime);
    }

    public final boolean e(AnalyticsListener$Events analyticsListener$Events, String str, int i5) {
        return analyticsListener$Events.a(i5) && this.a.a(analyticsListener$Events.b(i5), str);
    }

    @Override // ic.b
    public final void onBandwidthEstimate(AnalyticsListener$EventTime analyticsListener$EventTime, int i5, long j, long j5) {
        this.f10474l = i5;
        this.f10475m = j;
    }

    @Override // ic.b
    public final void onDownstreamFormatChanged(AnalyticsListener$EventTime analyticsListener$EventTime, MediaLoadData mediaLoadData) {
        int i5 = mediaLoadData.f5431b;
        Format format = mediaLoadData.f5432c;
        if (i5 == 2 || i5 == 0) {
            this.f10476n = format;
        } else if (i5 == 1) {
            this.f10477o = format;
        }
    }

    @Override // ic.b
    public final void onDrmSessionManagerError(AnalyticsListener$EventTime analyticsListener$EventTime, Exception exc) {
        this.k = exc;
    }

    @Override // ic.b
    public final void onDroppedVideoFrames(AnalyticsListener$EventTime analyticsListener$EventTime, int i5, long j) {
        this.j = i5;
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:107:0x0237  */
    /* JADX WARN: Removed duplicated region for block: B:109:0x023c  */
    /* JADX WARN: Removed duplicated region for block: B:112:0x0257  */
    /* JADX WARN: Removed duplicated region for block: B:124:0x02ec  */
    /* JADX WARN: Removed duplicated region for block: B:127:0x02ef A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:131:0x0272  */
    /* JADX WARN: Removed duplicated region for block: B:132:0x0276  */
    /* JADX WARN: Removed duplicated region for block: B:170:0x01e3  */
    /* JADX WARN: Removed duplicated region for block: B:175:0x01b7  */
    /* JADX WARN: Removed duplicated region for block: B:176:0x01a6  */
    /* JADX WARN: Removed duplicated region for block: B:177:0x01a0  */
    /* JADX WARN: Removed duplicated region for block: B:178:0x019a  */
    /* JADX WARN: Removed duplicated region for block: B:179:0x018b  */
    /* JADX WARN: Removed duplicated region for block: B:180:0x0181  */
    /* JADX WARN: Removed duplicated region for block: B:181:0x017b  */
    /* JADX WARN: Removed duplicated region for block: B:182:0x0173  */
    /* JADX WARN: Removed duplicated region for block: B:183:0x016b  */
    /* JADX WARN: Removed duplicated region for block: B:54:0x0167  */
    /* JADX WARN: Removed duplicated region for block: B:56:0x0170  */
    /* JADX WARN: Removed duplicated region for block: B:58:0x0176  */
    /* JADX WARN: Removed duplicated region for block: B:60:0x017e  */
    /* JADX WARN: Removed duplicated region for block: B:63:0x0188  */
    /* JADX WARN: Removed duplicated region for block: B:66:0x0191  */
    /* JADX WARN: Removed duplicated region for block: B:68:0x0197  */
    /* JADX WARN: Removed duplicated region for block: B:70:0x019d  */
    /* JADX WARN: Removed duplicated region for block: B:72:0x01a3  */
    /* JADX WARN: Removed duplicated region for block: B:75:0x01ae  */
    /* JADX WARN: Removed duplicated region for block: B:78:0x01c2  */
    /* JADX WARN: Removed duplicated region for block: B:85:0x01db  */
    /* JADX WARN: Removed duplicated region for block: B:92:0x01ff  */
    /* JADX WARN: Removed duplicated region for block: B:95:0x0209  */
    /* JADX WARN: Removed duplicated region for block: B:97:0x020e  */
    /* JADX WARN: Removed duplicated region for block: B:99:0x0213  */
    @Override // ic.b
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void onEvents(Player player, AnalyticsListener$Events analyticsListener$Events) {
        w wVar;
        ke.g gVar;
        w wVar2;
        z zVar;
        AnalyticsListener$EventTime analyticsListener$EventTime;
        boolean z5;
        long j;
        com.google.android.exoplayer2.c A;
        Exception exc;
        long j5;
        Format format;
        Format format2;
        VideoSize videoSize;
        boolean z6;
        boolean z7;
        int w5;
        boolean z8;
        Format format3;
        int i5;
        Tracks x5;
        HashMap hashMap;
        int i6;
        ke.g gVar2 = analyticsListener$Events.a;
        if (gVar2.a.size() == 0) {
            return;
        }
        int i10 = 0;
        while (true) {
            int size = gVar2.a.size();
            wVar = this.a;
            if (i10 >= size) {
                break;
            }
            int a = gVar2.a(i10);
            AnalyticsListener$EventTime b10 = analyticsListener$Events.b(a);
            if (a == 0) {
                wVar.i(b10);
            } else if (a == 11) {
                wVar.h(b10, this.f10473i);
            } else {
                wVar.g(b10);
            }
            i10++;
        }
        HashMap hashMap2 = this.f10466b;
        Iterator it = hashMap2.keySet().iterator();
        while (it.hasNext()) {
            String str = (String) it.next();
            int i11 = 0;
            AnalyticsListener$EventTime analyticsListener$EventTime2 = null;
            boolean z10 = false;
            while (i11 < gVar2.a.size()) {
                AnalyticsListener$EventTime b11 = analyticsListener$Events.b(gVar2.a(i11));
                boolean a10 = wVar.a(b11, str);
                if (analyticsListener$EventTime2 == null || (a10 && !z10)) {
                    hashMap = hashMap2;
                    i6 = i11;
                } else {
                    if (a10 == z10) {
                        i6 = i11;
                        hashMap = hashMap2;
                        if (b11.a <= analyticsListener$EventTime2.a) {
                        }
                    } else {
                        hashMap = hashMap2;
                        i6 = i11;
                    }
                    i11 = i6 + 1;
                    hashMap2 = hashMap;
                }
                analyticsListener$EventTime2 = b11;
                z10 = a10;
                i11 = i6 + 1;
                hashMap2 = hashMap;
            }
            HashMap hashMap3 = hashMap2;
            analyticsListener$EventTime2.getClass();
            Timeline timeline = analyticsListener$EventTime2.f5304b;
            nd.s sVar = analyticsListener$EventTime2.f5306d;
            if (!z10 && sVar != null) {
                int i12 = sVar.f15167b;
                Object obj = sVar.a;
                if (sVar.a()) {
                    s1 s1Var = this.f10469e;
                    long d6 = timeline.g(obj, s1Var).d(i12);
                    if (d6 == Long.MIN_VALUE) {
                        d6 = s1Var.f9872v;
                    }
                    gVar = gVar2;
                    analyticsListener$EventTime2 = new AnalyticsListener$EventTime(analyticsListener$EventTime2.a, timeline, analyticsListener$EventTime2.f5305c, new nd.s(obj, sVar.f15169d, i12), d0.U(d6 + s1Var.f9873w), timeline, analyticsListener$EventTime2.f5309g, analyticsListener$EventTime2.f5310h, analyticsListener$EventTime2.f5311i, analyticsListener$EventTime2.j);
                    wVar2 = wVar;
                    z10 = wVar2.a(analyticsListener$EventTime2, str);
                    Pair create = Pair.create(analyticsListener$EventTime2, Boolean.valueOf(z10));
                    zVar = (z) hashMap3.get(str);
                    boolean e9 = e(analyticsListener$Events, str, 11);
                    boolean e10 = e(analyticsListener$Events, str, 1018);
                    boolean e11 = e(analyticsListener$Events, str, 1011);
                    boolean e12 = e(analyticsListener$Events, str, 1000);
                    boolean e13 = e(analyticsListener$Events, str, 10);
                    boolean z11 = !e(analyticsListener$Events, str, 1003) || e(analyticsListener$Events, str, IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET);
                    boolean e14 = e(analyticsListener$Events, str, 1006);
                    boolean e15 = e(analyticsListener$Events, str, 1004);
                    boolean e16 = e(analyticsListener$Events, str, 25);
                    analyticsListener$EventTime = (AnalyticsListener$EventTime) create.first;
                    ((Boolean) create.second).booleanValue();
                    if (str.equals(this.f10471g)) {
                        z5 = e15;
                        j = -9223372036854775807L;
                    } else {
                        z5 = e15;
                        j = this.f10472h;
                    }
                    int i13 = !e10 ? this.j : 0;
                    A = !e13 ? player.A() : null;
                    exc = !z11 ? this.k : null;
                    j5 = j;
                    long j7 = !e14 ? this.f10474l : 0L;
                    long j10 = e14 ? this.f10475m : 0L;
                    format = !z5 ? this.f10476n : null;
                    format2 = !z5 ? this.f10477o : null;
                    videoSize = !e16 ? this.f10478p : null;
                    zVar.getClass();
                    if (j5 == -9223372036854775807L) {
                        z6 = e11;
                        z7 = e12;
                        long j11 = analyticsListener$EventTime.a;
                        zVar.I = true;
                    } else {
                        z6 = e11;
                        z7 = e12;
                    }
                    if (player.w() != 2) {
                        zVar.I = false;
                    }
                    w5 = player.w();
                    Iterator it2 = it;
                    if (w5 != 1 || w5 == 4 || e9) {
                        z8 = false;
                        zVar.K = false;
                    } else {
                        z8 = false;
                    }
                    if (A == null) {
                        zVar.L = true;
                        zVar.E++;
                    } else if (player.A() == null) {
                        zVar.L = z8;
                    }
                    if (zVar.J && !zVar.K) {
                        x5 = player.x();
                        if (!x5.a(2)) {
                            zVar.e(analyticsListener$EventTime, null);
                        }
                        if (!x5.a(1)) {
                            zVar.d(analyticsListener$EventTime, null);
                        }
                    }
                    if (format != null) {
                        zVar.e(analyticsListener$EventTime, format);
                    }
                    if (format2 != null) {
                        zVar.d(analyticsListener$EventTime, format2);
                    }
                    format3 = zVar.O;
                    if (format3 != null && format3.O == -1 && videoSize != null) {
                        f0 a11 = format3.a();
                        a11.f9682p = videoSize.f5576d;
                        a11.f9683q = videoSize.f5577e;
                        zVar.e(analyticsListener$EventTime, new Format(a11));
                    }
                    if (z7) {
                        zVar.M = true;
                    }
                    if (z6) {
                        zVar.D++;
                    }
                    zVar.C += i13;
                    zVar.A += j7;
                    zVar.B += j10;
                    if (exc != null) {
                        zVar.F++;
                    }
                    int w6 = player.w();
                    if (!zVar.I && zVar.J) {
                        i5 = 5;
                    } else if (!zVar.L) {
                        i5 = 13;
                    } else if (!zVar.J) {
                        i5 = zVar.M;
                    } else if (zVar.K) {
                        i5 = 14;
                    } else if (w6 == 4) {
                        i5 = 11;
                    } else if (w6 == 2) {
                        int i14 = zVar.G;
                        i5 = (i14 == 0 || i14 == 1 || i14 == 2 || i14 == 14) ? 2 : !player.g() ? 7 : player.H() != 0 ? 10 : 6;
                    } else {
                        i5 = 3;
                        if (w6 != 3) {
                            i5 = (w6 != 1 || zVar.G == 0) ? zVar.G : 12;
                        } else if (!player.g()) {
                            i5 = 4;
                        } else if (player.H() != 0) {
                            i5 = 9;
                        }
                    }
                    float f2 = player.b().f5275d;
                    if (zVar.G == i5 || zVar.S != f2) {
                        long j12 = analyticsListener$EventTime.a;
                        zVar.c(j12);
                        zVar.b(j12);
                    }
                    zVar.S = f2;
                    if (zVar.G == i5) {
                        zVar.f(analyticsListener$EventTime, i5);
                    }
                    wVar = wVar2;
                    hashMap2 = hashMap3;
                    it = it2;
                    gVar2 = gVar;
                }
            }
            gVar = gVar2;
            wVar2 = wVar;
            Pair create2 = Pair.create(analyticsListener$EventTime2, Boolean.valueOf(z10));
            zVar = (z) hashMap3.get(str);
            boolean e92 = e(analyticsListener$Events, str, 11);
            boolean e102 = e(analyticsListener$Events, str, 1018);
            boolean e112 = e(analyticsListener$Events, str, 1011);
            boolean e122 = e(analyticsListener$Events, str, 1000);
            boolean e132 = e(analyticsListener$Events, str, 10);
            if (e(analyticsListener$Events, str, 1003)) {
            }
            boolean e142 = e(analyticsListener$Events, str, 1006);
            boolean e152 = e(analyticsListener$Events, str, 1004);
            boolean e162 = e(analyticsListener$Events, str, 25);
            analyticsListener$EventTime = (AnalyticsListener$EventTime) create2.first;
            ((Boolean) create2.second).booleanValue();
            if (str.equals(this.f10471g)) {
            }
            if (!e102) {
            }
            if (!e132) {
            }
            if (!z11) {
            }
            j5 = j;
            long j72 = !e142 ? this.f10474l : 0L;
            if (e142) {
            }
            if (!z5) {
            }
            if (!z5) {
            }
            if (!e162) {
            }
            zVar.getClass();
            if (j5 == -9223372036854775807L) {
            }
            if (player.w() != 2) {
            }
            w5 = player.w();
            Iterator it22 = it;
            if (w5 != 1) {
            }
            z8 = false;
            zVar.K = false;
            if (A == null) {
            }
            if (zVar.J) {
                x5 = player.x();
                if (!x5.a(2)) {
                }
                if (!x5.a(1)) {
                }
            }
            if (format != null) {
            }
            if (format2 != null) {
            }
            format3 = zVar.O;
            if (format3 != null) {
                f0 a112 = format3.a();
                a112.f9682p = videoSize.f5576d;
                a112.f9683q = videoSize.f5577e;
                zVar.e(analyticsListener$EventTime, new Format(a112));
            }
            if (z7) {
            }
            if (z6) {
            }
            zVar.C += i13;
            zVar.A += j72;
            zVar.B += j10;
            if (exc != null) {
            }
            int w62 = player.w();
            if (!zVar.I) {
            }
            if (!zVar.L) {
            }
            float f22 = player.b().f5275d;
            if (zVar.G == i5) {
            }
            long j122 = analyticsListener$EventTime.a;
            zVar.c(j122);
            zVar.b(j122);
            zVar.S = f22;
            if (zVar.G == i5) {
            }
            wVar = wVar2;
            hashMap2 = hashMap3;
            it = it22;
            gVar2 = gVar;
        }
        w wVar3 = wVar;
        this.f10476n = null;
        this.f10477o = null;
        this.f10471g = null;
        if (analyticsListener$Events.a(1028)) {
            wVar3.c(analyticsListener$Events.b(1028));
        }
    }

    @Override // ic.b
    public final void onLoadError(AnalyticsListener$EventTime analyticsListener$EventTime, LoadEventInfo loadEventInfo, MediaLoadData mediaLoadData, IOException iOException, boolean z5) {
        this.k = iOException;
    }

    @Override // ic.b
    public final void onPositionDiscontinuity(AnalyticsListener$EventTime analyticsListener$EventTime, Player.PositionInfo positionInfo, Player.PositionInfo positionInfo2, int i5) {
        String str;
        if (this.f10471g == null) {
            w wVar = this.a;
            synchronized (wVar) {
                str = wVar.f10562f;
            }
            this.f10471g = str;
            this.f10472h = positionInfo.f5284x;
        }
        this.f10473i = i5;
    }

    @Override // ic.b
    public final void onVideoSizeChanged(AnalyticsListener$EventTime analyticsListener$EventTime, VideoSize videoSize) {
        this.f10478p = videoSize;
    }
}
