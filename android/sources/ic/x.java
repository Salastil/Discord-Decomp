package ic;

import android.content.Context;
import android.media.DeniedByServerException;
import android.media.MediaCodec;
import android.media.MediaDrm;
import android.media.MediaDrmResetException;
import android.media.NotProvisionedException;
import android.media.metrics.NetworkEvent;
import android.media.metrics.PlaybackErrorEvent;
import android.media.metrics.PlaybackMetrics;
import android.media.metrics.PlaybackSession;
import android.media.metrics.PlaybackStateEvent;
import android.media.metrics.TrackChangeEvent;
import android.net.Uri;
import android.os.SystemClock;
import android.system.ErrnoException;
import android.system.OsConstants;
import android.util.Pair;
import com.google.android.exoplayer2.Format;
import com.google.android.exoplayer2.PlaybackException;
import com.google.android.exoplayer2.Player;
import com.google.android.exoplayer2.Timeline;
import com.google.android.exoplayer2.Tracks;
import com.google.android.exoplayer2.analytics.AnalyticsListener$EventTime;
import com.google.android.exoplayer2.analytics.AnalyticsListener$Events;
import com.google.android.exoplayer2.decoder.DecoderCounters;
import com.google.android.exoplayer2.source.LoadEventInfo;
import com.google.android.exoplayer2.source.MediaLoadData;
import com.google.android.exoplayer2.video.VideoSize;
import hc.f0;
import hc.g1;
import hc.p0;
import hc.s1;
import hc.t1;
import ie.v0;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.net.SocketTimeoutException;
import java.net.UnknownHostException;
import java.util.HashMap;
import java.util.UUID;
import ke.d0;
import nc.h0;

/* loaded from: classes3.dex */
public final class x implements b, y {
    public boolean A;
    public final Context a;

    /* renamed from: b, reason: collision with root package name */
    public final w f10564b;

    /* renamed from: c, reason: collision with root package name */
    public final PlaybackSession f10565c;

    /* renamed from: i, reason: collision with root package name */
    public String f10571i;
    public PlaybackMetrics.Builder j;
    public int k;

    /* renamed from: n, reason: collision with root package name */
    public PlaybackException f10574n;

    /* renamed from: o, reason: collision with root package name */
    public a1.d f10575o;

    /* renamed from: p, reason: collision with root package name */
    public a1.d f10576p;

    /* renamed from: q, reason: collision with root package name */
    public a1.d f10577q;

    /* renamed from: r, reason: collision with root package name */
    public Format f10578r;

    /* renamed from: s, reason: collision with root package name */
    public Format f10579s;

    /* renamed from: t, reason: collision with root package name */
    public Format f10580t;

    /* renamed from: u, reason: collision with root package name */
    public boolean f10581u;

    /* renamed from: v, reason: collision with root package name */
    public int f10582v;

    /* renamed from: w, reason: collision with root package name */
    public boolean f10583w;

    /* renamed from: x, reason: collision with root package name */
    public int f10584x;

    /* renamed from: y, reason: collision with root package name */
    public int f10585y;

    /* renamed from: z, reason: collision with root package name */
    public int f10586z;

    /* renamed from: e, reason: collision with root package name */
    public final Timeline.Window f10567e = new Timeline.Window();

    /* renamed from: f, reason: collision with root package name */
    public final s1 f10568f = new s1();

    /* renamed from: h, reason: collision with root package name */
    public final HashMap f10570h = new HashMap();

    /* renamed from: g, reason: collision with root package name */
    public final HashMap f10569g = new HashMap();

    /* renamed from: d, reason: collision with root package name */
    public final long f10566d = SystemClock.elapsedRealtime();

    /* renamed from: l, reason: collision with root package name */
    public int f10572l = 0;

    /* renamed from: m, reason: collision with root package name */
    public int f10573m = 0;

    public x(Context context, PlaybackSession playbackSession) {
        this.a = context.getApplicationContext();
        this.f10565c = playbackSession;
        w wVar = new w();
        this.f10564b = wVar;
        wVar.f10560d = this;
    }

    @Override // ic.y
    public final void b(AnalyticsListener$EventTime analyticsListener$EventTime, String str, boolean z5) {
        nd.s sVar = analyticsListener$EventTime.f5306d;
        if ((sVar == null || !sVar.a()) && str.equals(this.f10571i)) {
            f();
        }
        this.f10569g.remove(str);
        this.f10570h.remove(str);
    }

    @Override // ic.y
    public final void c(AnalyticsListener$EventTime analyticsListener$EventTime, String str) {
        nd.s sVar = analyticsListener$EventTime.f5306d;
        if (sVar == null || !sVar.a()) {
            f();
            this.f10571i = str;
            this.j = new PlaybackMetrics.Builder().setPlayerName("ExoPlayerLib").setPlayerVersion("2.19.1");
            g(analyticsListener$EventTime.f5304b, sVar);
        }
    }

    public final boolean e(a1.d dVar) {
        String str;
        if (dVar == null) {
            return false;
        }
        String str2 = (String) dVar.f16v;
        w wVar = this.f10564b;
        synchronized (wVar) {
            str = wVar.f10562f;
        }
        return str2.equals(str);
    }

    public final void f() {
        PlaybackMetrics.Builder builder = this.j;
        if (builder != null && this.A) {
            builder.setAudioUnderrunCount(this.f10586z);
            this.j.setVideoFramesDropped(this.f10584x);
            this.j.setVideoFramesPlayed(this.f10585y);
            Long l6 = (Long) this.f10569g.get(this.f10571i);
            this.j.setNetworkTransferDurationMillis(l6 == null ? 0L : l6.longValue());
            Long l7 = (Long) this.f10570h.get(this.f10571i);
            this.j.setNetworkBytesRead(l7 == null ? 0L : l7.longValue());
            this.j.setStreamSource((l7 == null || l7.longValue() <= 0) ? 0 : 1);
            this.f10565c.reportPlaybackMetrics(this.j.build());
        }
        this.j = null;
        this.f10571i = null;
        this.f10586z = 0;
        this.f10584x = 0;
        this.f10585y = 0;
        this.f10578r = null;
        this.f10579s = null;
        this.f10580t = null;
        this.A = false;
    }

    public final void g(Timeline timeline, nd.s sVar) {
        PlaybackMetrics.Builder builder = this.j;
        if (sVar == null) {
            return;
        }
        int b10 = timeline.b(sVar.a);
        if (b10 == -1) {
            return;
        }
        s1 s1Var = this.f10568f;
        int i5 = 0;
        timeline.f(b10, s1Var, false);
        int i6 = s1Var.f9871i;
        Timeline.Window window = this.f10567e;
        timeline.n(i6, window);
        p0 p0Var = window.f5294i.f5235e;
        if (p0Var != null) {
            Uri uri = p0Var.f9833d;
            String str = p0Var.f9834e;
            if (str != null) {
                int i10 = d0.a;
                switch (str) {
                    case "application/x-mpegURL":
                        i5 = 2;
                        break;
                    case "application/vnd.ms-sstr+xml":
                        i5 = 1;
                        break;
                    case "application/dash+xml":
                        break;
                    case "application/x-rtsp":
                        i5 = 3;
                        break;
                    default:
                        i5 = 4;
                        break;
                }
            } else {
                i5 = d0.D(uri);
            }
            i5 = i5 != 0 ? i5 != 1 ? i5 != 2 ? 1 : 4 : 5 : 3;
        }
        builder.setStreamType(i5);
        if (window.K != -9223372036854775807L && !window.I && !window.F && !window.a()) {
            builder.setMediaDurationMillis(d0.U(window.K));
        }
        builder.setPlaybackType(window.a() ? 2 : 1);
        this.A = true;
    }

    public final void h(int i5, long j, Format format, int i6) {
        int i10;
        TrackChangeEvent.Builder timeSinceCreatedMillis = new TrackChangeEvent.Builder(i5).setTimeSinceCreatedMillis(j - this.f10566d);
        if (format != null) {
            timeSinceCreatedMillis.setTrackState(1);
            if (i6 != 1) {
                i10 = 3;
                if (i6 != 2) {
                    i10 = i6 != 3 ? 1 : 4;
                }
            } else {
                i10 = 2;
            }
            timeSinceCreatedMillis.setTrackChangeReason(i10);
            String str = format.H;
            if (str != null) {
                timeSinceCreatedMillis.setContainerMimeType(str);
            }
            String str2 = format.I;
            if (str2 != null) {
                timeSinceCreatedMillis.setSampleMimeType(str2);
            }
            String str3 = format.F;
            if (str3 != null) {
                timeSinceCreatedMillis.setCodecName(str3);
            }
            int i11 = format.E;
            if (i11 != -1) {
                timeSinceCreatedMillis.setBitrate(i11);
            }
            int i12 = format.N;
            if (i12 != -1) {
                timeSinceCreatedMillis.setWidth(i12);
            }
            int i13 = format.O;
            if (i13 != -1) {
                timeSinceCreatedMillis.setHeight(i13);
            }
            int i14 = format.V;
            if (i14 != -1) {
                timeSinceCreatedMillis.setChannelCount(i14);
            }
            int i15 = format.W;
            if (i15 != -1) {
                timeSinceCreatedMillis.setAudioSampleRate(i15);
            }
            String str4 = format.f5229i;
            if (str4 != null) {
                int i16 = d0.a;
                String[] split = str4.split("-", -1);
                Pair create = Pair.create(split[0], split.length >= 2 ? split[1] : null);
                timeSinceCreatedMillis.setLanguage((String) create.first);
                Object obj = create.second;
                if (obj != null) {
                    timeSinceCreatedMillis.setLanguageRegion((String) obj);
                }
            }
            float f2 = format.P;
            if (f2 != -1.0f) {
                timeSinceCreatedMillis.setVideoFrameRate(f2);
            }
        } else {
            timeSinceCreatedMillis.setTrackState(0);
        }
        this.A = true;
        this.f10565c.reportTrackChangeEvent(timeSinceCreatedMillis.build());
    }

    @Override // ic.b
    public final void onBandwidthEstimate(AnalyticsListener$EventTime analyticsListener$EventTime, int i5, long j, long j5) {
        nd.s sVar = analyticsListener$EventTime.f5306d;
        if (sVar != null) {
            String e9 = this.f10564b.e(analyticsListener$EventTime.f5304b, sVar);
            HashMap hashMap = this.f10570h;
            Long l6 = (Long) hashMap.get(e9);
            HashMap hashMap2 = this.f10569g;
            Long l7 = (Long) hashMap2.get(e9);
            hashMap.put(e9, Long.valueOf((l6 == null ? 0L : l6.longValue()) + j));
            hashMap2.put(e9, Long.valueOf((l7 != null ? l7.longValue() : 0L) + i5));
        }
    }

    @Override // ic.b
    public final void onDownstreamFormatChanged(AnalyticsListener$EventTime analyticsListener$EventTime, MediaLoadData mediaLoadData) {
        nd.s sVar = analyticsListener$EventTime.f5306d;
        if (sVar == null) {
            return;
        }
        Format format = mediaLoadData.f5432c;
        format.getClass();
        int i5 = mediaLoadData.f5433d;
        Timeline timeline = analyticsListener$EventTime.f5304b;
        sVar.getClass();
        a1.d dVar = new a1.d(format, i5, this.f10564b.e(timeline, sVar), 10);
        int i6 = mediaLoadData.f5431b;
        if (i6 != 0) {
            if (i6 == 1) {
                this.f10576p = dVar;
                return;
            } else if (i6 != 2) {
                if (i6 != 3) {
                    return;
                }
                this.f10577q = dVar;
                return;
            }
        }
        this.f10575o = dVar;
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:101:0x040d  */
    /* JADX WARN: Removed duplicated region for block: B:114:0x043c  */
    /* JADX WARN: Removed duplicated region for block: B:125:0x0466  */
    /* JADX WARN: Removed duplicated region for block: B:136:0x0493  */
    /* JADX WARN: Removed duplicated region for block: B:139:0x04af  */
    /* JADX WARN: Removed duplicated region for block: B:142:0x04d0  */
    /* JADX WARN: Removed duplicated region for block: B:145:0x04d8  */
    /* JADX WARN: Removed duplicated region for block: B:148:0x04f0  */
    /* JADX WARN: Removed duplicated region for block: B:151:0x0544  */
    /* JADX WARN: Removed duplicated region for block: B:154:0x056b  */
    /* JADX WARN: Removed duplicated region for block: B:157:? A[RETURN, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:158:0x04f3  */
    /* JADX WARN: Removed duplicated region for block: B:191:0x04dd  */
    /* JADX WARN: Removed duplicated region for block: B:194:0x0495  */
    /* JADX WARN: Removed duplicated region for block: B:195:0x0498  */
    /* JADX WARN: Removed duplicated region for block: B:196:0x049b  */
    /* JADX WARN: Removed duplicated region for block: B:197:0x049d  */
    /* JADX WARN: Removed duplicated region for block: B:198:0x04a0  */
    /* JADX WARN: Removed duplicated region for block: B:199:0x04a3  */
    /* JADX WARN: Removed duplicated region for block: B:200:0x04a5  */
    /* JADX WARN: Removed duplicated region for block: B:201:0x04a7  */
    /* JADX WARN: Removed duplicated region for block: B:202:0x04aa  */
    /* JADX WARN: Removed duplicated region for block: B:87:0x03e3  */
    /* JADX WARN: Removed duplicated region for block: B:89:0x03e5  */
    /* JADX WARN: Removed duplicated region for block: B:95:0x03fb  */
    /* JADX WARN: Removed duplicated region for block: B:97:0x03fd  */
    @Override // ic.b
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void onEvents(Player player, AnalyticsListener$Events analyticsListener$Events) {
        w wVar;
        int i5;
        boolean z5;
        int i6;
        int i10;
        int i11;
        int i12;
        int i13;
        c5.e eVar;
        int i14;
        int i15;
        int i16;
        int i17;
        int i18;
        int i19;
        a1.d dVar;
        int i20;
        int i21;
        int i22;
        int i23;
        Format format;
        nc.i iVar;
        int i24;
        ke.g gVar = analyticsListener$Events.a;
        if (gVar.a.size() == 0) {
            return;
        }
        int i25 = 0;
        while (true) {
            int size = gVar.a.size();
            wVar = this.f10564b;
            if (i25 >= size) {
                break;
            }
            int a = gVar.a(i25);
            AnalyticsListener$EventTime b10 = analyticsListener$Events.b(a);
            if (a == 0) {
                wVar.i(b10);
            } else if (a == 11) {
                wVar.h(b10, this.k);
            } else {
                wVar.g(b10);
            }
            i25++;
        }
        long elapsedRealtime = SystemClock.elapsedRealtime();
        if (analyticsListener$Events.a(0)) {
            AnalyticsListener$EventTime b11 = analyticsListener$Events.b(0);
            if (this.j != null) {
                g(b11.f5304b, b11.f5306d);
            }
        }
        int i26 = 1;
        if (analyticsListener$Events.a(2) && this.j != null) {
            fi.c0 listIterator = player.x().f5300d.listIterator(0);
            loop1: while (true) {
                if (!listIterator.hasNext()) {
                    iVar = null;
                    break;
                }
                t1 t1Var = (t1) listIterator.next();
                for (int i27 = 0; i27 < t1Var.f9887d; i27++) {
                    if (t1Var.f9891w[i27] && (iVar = t1Var.f9888e.f15211v[i27].L) != null) {
                        break loop1;
                    }
                }
            }
            if (iVar != null) {
                PlaybackMetrics.Builder builder = this.j;
                int i28 = d0.a;
                int i29 = 0;
                while (true) {
                    if (i29 >= iVar.f15040v) {
                        i24 = 1;
                        break;
                    }
                    UUID uuid = iVar.f15037d[i29].f15033e;
                    if (uuid.equals(hc.h.f9711d)) {
                        i24 = 3;
                        break;
                    } else if (uuid.equals(hc.h.f9712e)) {
                        i24 = 2;
                        break;
                    } else {
                        if (uuid.equals(hc.h.f9710c)) {
                            i24 = 6;
                            break;
                        }
                        i29++;
                    }
                }
                builder.setDrmType(i24);
            }
        }
        if (analyticsListener$Events.a(1011)) {
            this.f10586z++;
        }
        PlaybackException playbackException = this.f10574n;
        Context context = this.a;
        long j = this.f10566d;
        if (playbackException == null) {
            i19 = 2;
            i13 = 13;
            i6 = 8;
            i10 = 7;
            i11 = 6;
            i12 = 9;
        } else {
            int i30 = playbackException.f5272d;
            boolean z6 = this.f10582v == 4;
            if (i30 == 1001) {
                eVar = new c5.e(20, 0, 3);
            } else {
                if (playbackException instanceof com.google.android.exoplayer2.c) {
                    com.google.android.exoplayer2.c cVar = (com.google.android.exoplayer2.c) playbackException;
                    z5 = cVar.f5343i == 1;
                    i5 = cVar.f5347y;
                } else {
                    i5 = 0;
                    z5 = false;
                }
                Throwable cause = playbackException.getCause();
                cause.getClass();
                if (!(cause instanceof IOException)) {
                    int i31 = 24;
                    i6 = 8;
                    i10 = 7;
                    i11 = 6;
                    i12 = 9;
                    if (z5 && (i5 == 0 || i5 == 1)) {
                        eVar = new c5.e(35, 0, 3);
                    } else if (z5 && i5 == 3) {
                        eVar = new c5.e(15, 0, 3);
                    } else if (z5 && i5 == 2) {
                        eVar = new c5.e(23, 0, 3);
                    } else {
                        if (cause instanceof cd.q) {
                            i13 = 13;
                            eVar = new c5.e(13, d0.t(((cd.q) cause).f3451v), 3);
                        } else {
                            i13 = 13;
                            if (cause instanceof cd.m) {
                                eVar = new c5.e(14, d0.t(((cd.m) cause).f3440d), 3);
                            } else if (cause instanceof OutOfMemoryError) {
                                eVar = new c5.e(14, 0, 3);
                            } else if (cause instanceof jc.s) {
                                eVar = new c5.e(17, ((jc.s) cause).f12638d, 3);
                            } else if (cause instanceof jc.t) {
                                eVar = new c5.e(18, ((jc.t) cause).f12653d, 3);
                            } else if (d0.a < 16 || !(cause instanceof MediaCodec.CryptoException)) {
                                eVar = new c5.e(22, 0, 3);
                            } else {
                                int errorCode = ((MediaCodec.CryptoException) cause).getErrorCode();
                                switch (d0.s(errorCode)) {
                                    case 6002:
                                        break;
                                    case 6003:
                                        i31 = 28;
                                        break;
                                    case 6004:
                                        i31 = 25;
                                        break;
                                    case 6005:
                                        i31 = 26;
                                        break;
                                    default:
                                        i31 = 27;
                                        break;
                                }
                                eVar = new c5.e(i31, errorCode, 3);
                            }
                        }
                        this.f10565c.reportPlaybackErrorEvent(new PlaybackErrorEvent.Builder().setTimeSinceCreatedMillis(elapsedRealtime - j).setErrorCode(eVar.f3328b).setSubErrorCode(eVar.f3329c).setException(playbackException).build());
                        i26 = 1;
                        this.A = true;
                        this.f10574n = null;
                        i19 = 2;
                    }
                    i13 = 13;
                    this.f10565c.reportPlaybackErrorEvent(new PlaybackErrorEvent.Builder().setTimeSinceCreatedMillis(elapsedRealtime - j).setErrorCode(eVar.f3328b).setSubErrorCode(eVar.f3329c).setException(playbackException).build());
                    i26 = 1;
                    this.A = true;
                    this.f10574n = null;
                    i19 = 2;
                } else if (cause instanceof ie.d0) {
                    eVar = new c5.e(5, ((ie.d0) cause).f10662v, 3);
                } else {
                    if ((cause instanceof ie.c0) || (cause instanceof g1)) {
                        i14 = 9;
                        i15 = 7;
                        i16 = 8;
                        i17 = 6;
                        eVar = new c5.e(z6 ? 10 : 11, 0, 3);
                    } else {
                        boolean z7 = cause instanceof ie.b0;
                        if (z7 || (cause instanceof v0)) {
                            i14 = 9;
                            if (ke.u.e(context).f() == 1) {
                                eVar = new c5.e(3, 0, 3);
                            } else {
                                Throwable cause2 = cause.getCause();
                                if (cause2 instanceof UnknownHostException) {
                                    eVar = new c5.e(6, 0, 3);
                                    i12 = 9;
                                    i11 = 6;
                                    i13 = 13;
                                    i6 = 8;
                                    i10 = 7;
                                } else {
                                    i17 = 6;
                                    if (cause2 instanceof SocketTimeoutException) {
                                        i15 = 7;
                                        eVar = new c5.e(7, 0, 3);
                                    } else {
                                        i15 = 7;
                                        if (z7 && ((ie.b0) cause).f10653i == 1) {
                                            eVar = new c5.e(4, 0, 3);
                                        } else {
                                            i16 = 8;
                                            eVar = new c5.e(8, 0, 3);
                                        }
                                    }
                                    i12 = 9;
                                    i10 = i15;
                                    i11 = 6;
                                    i13 = 13;
                                    i6 = 8;
                                }
                                this.f10565c.reportPlaybackErrorEvent(new PlaybackErrorEvent.Builder().setTimeSinceCreatedMillis(elapsedRealtime - j).setErrorCode(eVar.f3328b).setSubErrorCode(eVar.f3329c).setException(playbackException).build());
                                i26 = 1;
                                this.A = true;
                                this.f10574n = null;
                                i19 = 2;
                            }
                        } else if (i30 == 1002) {
                            eVar = new c5.e(21, 0, 3);
                        } else if (cause instanceof nc.j) {
                            Throwable cause3 = cause.getCause();
                            cause3.getClass();
                            int i32 = d0.a;
                            if (i32 < 21 || !(cause3 instanceof MediaDrm.MediaDrmStateException)) {
                                eVar = (i32 < 23 || !(cause3 instanceof MediaDrmResetException)) ? (i32 < 18 || !(cause3 instanceof NotProvisionedException)) ? (i32 < 18 || !(cause3 instanceof DeniedByServerException)) ? cause3 instanceof h0 ? new c5.e(23, 0, 3) : cause3 instanceof nc.d ? new c5.e(28, 0, 3) : new c5.e(30, 0, 3) : new c5.e(29, 0, 3) : new c5.e(24, 0, 3) : new c5.e(27, 0, 3);
                            } else {
                                int t5 = d0.t(((MediaDrm.MediaDrmStateException) cause3).getDiagnosticInfo());
                                switch (d0.s(t5)) {
                                    case 6002:
                                        i18 = 24;
                                        break;
                                    case 6003:
                                        i18 = 28;
                                        break;
                                    case 6004:
                                        i18 = 25;
                                        break;
                                    case 6005:
                                        i18 = 26;
                                        break;
                                    default:
                                        i18 = 27;
                                        break;
                                }
                                eVar = new c5.e(i18, t5, 3);
                            }
                        } else if ((cause instanceof ie.y) && (cause.getCause() instanceof FileNotFoundException)) {
                            Throwable cause4 = cause.getCause();
                            cause4.getClass();
                            Throwable cause5 = cause4.getCause();
                            eVar = (d0.a >= 21 && (cause5 instanceof ErrnoException) && ((ErrnoException) cause5).errno == OsConstants.EACCES) ? new c5.e(32, 0, 3) : new c5.e(31, 0, 3);
                        } else {
                            i14 = 9;
                            eVar = new c5.e(9, 0, 3);
                        }
                        i12 = i14;
                        i13 = 13;
                        i6 = 8;
                        i10 = 7;
                        i11 = 6;
                        this.f10565c.reportPlaybackErrorEvent(new PlaybackErrorEvent.Builder().setTimeSinceCreatedMillis(elapsedRealtime - j).setErrorCode(eVar.f3328b).setSubErrorCode(eVar.f3329c).setException(playbackException).build());
                        i26 = 1;
                        this.A = true;
                        this.f10574n = null;
                        i19 = 2;
                    }
                    i12 = i14;
                    i10 = i15;
                    i6 = i16;
                    i11 = i17;
                    i13 = 13;
                    this.f10565c.reportPlaybackErrorEvent(new PlaybackErrorEvent.Builder().setTimeSinceCreatedMillis(elapsedRealtime - j).setErrorCode(eVar.f3328b).setSubErrorCode(eVar.f3329c).setException(playbackException).build());
                    i26 = 1;
                    this.A = true;
                    this.f10574n = null;
                    i19 = 2;
                }
            }
            i13 = 13;
            i6 = 8;
            i10 = 7;
            i11 = 6;
            i12 = 9;
            this.f10565c.reportPlaybackErrorEvent(new PlaybackErrorEvent.Builder().setTimeSinceCreatedMillis(elapsedRealtime - j).setErrorCode(eVar.f3328b).setSubErrorCode(eVar.f3329c).setException(playbackException).build());
            i26 = 1;
            this.A = true;
            this.f10574n = null;
            i19 = 2;
        }
        if (analyticsListener$Events.a(i19)) {
            Tracks x5 = player.x();
            boolean a10 = x5.a(i19);
            boolean a11 = x5.a(i26);
            boolean a12 = x5.a(3);
            if (a10 || a11 || a12) {
                if (a10) {
                    format = null;
                } else {
                    format = null;
                    if (!d0.a(this.f10578r, null)) {
                        int i33 = this.f10578r == null ? 1 : 0;
                        this.f10578r = null;
                        i20 = 5;
                        h(1, elapsedRealtime, null, i33);
                        if (!a11 && !d0.a(this.f10579s, format)) {
                            int i34 = this.f10579s != null ? 1 : 0;
                            this.f10579s = format;
                            h(0, elapsedRealtime, format, i34);
                        }
                        if (!a12 && !d0.a(this.f10580t, format)) {
                            int i35 = this.f10580t != null ? 1 : 0;
                            this.f10580t = format;
                            h(2, elapsedRealtime, format, i35);
                        }
                        dVar = format;
                        if (e(this.f10575o)) {
                            a1.d dVar2 = this.f10575o;
                            Format format2 = (Format) dVar2.f15i;
                            if (format2.O != -1) {
                                int i36 = dVar2.f14e;
                                if (!d0.a(this.f10578r, format2)) {
                                    int i37 = (this.f10578r == null && i36 == 0) ? 1 : i36;
                                    this.f10578r = format2;
                                    h(1, elapsedRealtime, format2, i37);
                                }
                                this.f10575o = dVar;
                            }
                        }
                        if (e(this.f10576p)) {
                            a1.d dVar3 = this.f10576p;
                            Format format3 = (Format) dVar3.f15i;
                            int i38 = dVar3.f14e;
                            if (!d0.a(this.f10579s, format3)) {
                                int i39 = (this.f10579s == null && i38 == 0) ? 1 : i38;
                                this.f10579s = format3;
                                h(0, elapsedRealtime, format3, i39);
                            }
                            this.f10576p = dVar;
                        }
                        if (e(this.f10577q)) {
                            a1.d dVar4 = this.f10577q;
                            Format format4 = (Format) dVar4.f15i;
                            int i40 = dVar4.f14e;
                            if (!d0.a(this.f10580t, format4)) {
                                int i41 = (this.f10580t == null && i40 == 0) ? 1 : i40;
                                this.f10580t = format4;
                                h(2, elapsedRealtime, format4, i41);
                            }
                            this.f10577q = dVar;
                        }
                        switch (ke.u.e(context).f()) {
                            case 0:
                                i21 = 0;
                                break;
                            case 1:
                                i21 = i12;
                                break;
                            case 2:
                                i21 = 2;
                                break;
                            case 3:
                                i21 = 4;
                                break;
                            case 4:
                                i21 = i20;
                                break;
                            case 5:
                                i21 = i11;
                                break;
                            case 6:
                            case 8:
                            default:
                                i21 = 1;
                                break;
                            case 7:
                                i21 = 3;
                                break;
                            case 9:
                                i21 = i6;
                                break;
                            case 10:
                                i21 = i10;
                                break;
                        }
                        if (i21 != this.f10573m) {
                            this.f10573m = i21;
                            this.f10565c.reportNetworkEvent(new NetworkEvent.Builder().setNetworkType(i21).setTimeSinceCreatedMillis(elapsedRealtime - j).build());
                        }
                        if (player.w() != 2) {
                            this.f10581u = false;
                        }
                        if (player.A() == null) {
                            this.f10583w = false;
                            i22 = 10;
                        } else {
                            i22 = 10;
                            if (analyticsListener$Events.a(10)) {
                                this.f10583w = true;
                            }
                        }
                        int w5 = player.w();
                        if (this.f10581u) {
                            i23 = i20;
                        } else if (this.f10583w) {
                            i23 = i13;
                        } else if (w5 == 4) {
                            i23 = 11;
                        } else if (w5 == 2) {
                            int i42 = this.f10572l;
                            i23 = (i42 == 0 || i42 == 2) ? 2 : !player.g() ? i10 : player.H() != 0 ? i22 : i11;
                        } else {
                            i23 = w5 == 3 ? !player.g() ? 4 : player.H() != 0 ? i12 : 3 : (w5 != 1 || this.f10572l == 0) ? this.f10572l : 12;
                        }
                        if (this.f10572l != i23) {
                            this.f10572l = i23;
                            this.A = true;
                            this.f10565c.reportPlaybackStateEvent(new PlaybackStateEvent.Builder().setState(this.f10572l).setTimeSinceCreatedMillis(elapsedRealtime - j).build());
                        }
                        if (analyticsListener$Events.a(1028)) {
                            wVar.c(analyticsListener$Events.b(1028));
                            return;
                        }
                        return;
                    }
                }
                i20 = 5;
                if (!a11) {
                    if (this.f10579s != null) {
                    }
                    this.f10579s = format;
                    h(0, elapsedRealtime, format, i34);
                }
                if (!a12) {
                    if (this.f10580t != null) {
                    }
                    this.f10580t = format;
                    h(2, elapsedRealtime, format, i35);
                }
                dVar = format;
                if (e(this.f10575o)) {
                }
                if (e(this.f10576p)) {
                }
                if (e(this.f10577q)) {
                }
                switch (ke.u.e(context).f()) {
                }
                if (i21 != this.f10573m) {
                }
                if (player.w() != 2) {
                }
                if (player.A() == null) {
                }
                int w52 = player.w();
                if (this.f10581u) {
                }
                if (this.f10572l != i23) {
                }
                if (analyticsListener$Events.a(1028)) {
                }
            }
        }
        dVar = 0;
        i20 = 5;
        if (e(this.f10575o)) {
        }
        if (e(this.f10576p)) {
        }
        if (e(this.f10577q)) {
        }
        switch (ke.u.e(context).f()) {
        }
        if (i21 != this.f10573m) {
        }
        if (player.w() != 2) {
        }
        if (player.A() == null) {
        }
        int w522 = player.w();
        if (this.f10581u) {
        }
        if (this.f10572l != i23) {
        }
        if (analyticsListener$Events.a(1028)) {
        }
    }

    @Override // ic.b
    public final void onLoadError(AnalyticsListener$EventTime analyticsListener$EventTime, LoadEventInfo loadEventInfo, MediaLoadData mediaLoadData, IOException iOException, boolean z5) {
        this.f10582v = mediaLoadData.a;
    }

    @Override // ic.b
    public final void onPlayerError(AnalyticsListener$EventTime analyticsListener$EventTime, PlaybackException playbackException) {
        this.f10574n = playbackException;
    }

    @Override // ic.b
    public final void onPositionDiscontinuity(AnalyticsListener$EventTime analyticsListener$EventTime, Player.PositionInfo positionInfo, Player.PositionInfo positionInfo2, int i5) {
        if (i5 == 1) {
            this.f10581u = true;
        }
        this.k = i5;
    }

    @Override // ic.b
    public final void onVideoDisabled(AnalyticsListener$EventTime analyticsListener$EventTime, DecoderCounters decoderCounters) {
        this.f10584x += decoderCounters.f5383g;
        this.f10585y += decoderCounters.f5381e;
    }

    @Override // ic.b
    public final void onVideoSizeChanged(AnalyticsListener$EventTime analyticsListener$EventTime, VideoSize videoSize) {
        a1.d dVar = this.f10575o;
        if (dVar != null) {
            Format format = (Format) dVar.f15i;
            if (format.O == -1) {
                f0 a = format.a();
                a.f9682p = videoSize.f5576d;
                a.f9683q = videoSize.f5577e;
                this.f10575o = new a1.d(new Format(a), dVar.f14e, (String) dVar.f16v, 10);
            }
        }
    }

    @Override // ic.y
    public final void a(String str) {
    }

    @Override // ic.y
    public final void d(AnalyticsListener$EventTime analyticsListener$EventTime, String str) {
    }
}
