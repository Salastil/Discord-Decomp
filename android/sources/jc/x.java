package jc;

import android.media.AudioTimestamp;
import android.media.AudioTrack;
import android.os.Handler;
import android.os.SystemClock;
import java.lang.reflect.Method;

/* loaded from: classes3.dex */
public final class x {
    public long A;
    public long B;
    public long C;
    public long D;
    public boolean E;
    public long F;
    public long G;
    public final u4.c a;

    /* renamed from: b, reason: collision with root package name */
    public final long[] f12671b;

    /* renamed from: c, reason: collision with root package name */
    public AudioTrack f12672c;

    /* renamed from: d, reason: collision with root package name */
    public int f12673d;

    /* renamed from: e, reason: collision with root package name */
    public int f12674e;

    /* renamed from: f, reason: collision with root package name */
    public w f12675f;

    /* renamed from: g, reason: collision with root package name */
    public int f12676g;

    /* renamed from: h, reason: collision with root package name */
    public boolean f12677h;

    /* renamed from: i, reason: collision with root package name */
    public long f12678i;
    public float j;
    public boolean k;

    /* renamed from: l, reason: collision with root package name */
    public long f12679l;

    /* renamed from: m, reason: collision with root package name */
    public long f12680m;

    /* renamed from: n, reason: collision with root package name */
    public Method f12681n;

    /* renamed from: o, reason: collision with root package name */
    public long f12682o;

    /* renamed from: p, reason: collision with root package name */
    public boolean f12683p;

    /* renamed from: q, reason: collision with root package name */
    public boolean f12684q;

    /* renamed from: r, reason: collision with root package name */
    public long f12685r;

    /* renamed from: s, reason: collision with root package name */
    public long f12686s;

    /* renamed from: t, reason: collision with root package name */
    public long f12687t;

    /* renamed from: u, reason: collision with root package name */
    public long f12688u;

    /* renamed from: v, reason: collision with root package name */
    public long f12689v;

    /* renamed from: w, reason: collision with root package name */
    public int f12690w;

    /* renamed from: x, reason: collision with root package name */
    public int f12691x;

    /* renamed from: y, reason: collision with root package name */
    public long f12692y;

    /* renamed from: z, reason: collision with root package name */
    public long f12693z;

    public x(u4.c cVar) {
        this.a = cVar;
        if (ke.d0.a >= 18) {
            try {
                this.f12681n = AudioTrack.class.getMethod("getLatency", null);
            } catch (NoSuchMethodException unused) {
            }
        }
        this.f12671b = new long[10];
    }

    /* JADX WARN: Removed duplicated region for block: B:100:0x0284  */
    /* JADX WARN: Removed duplicated region for block: B:103:0x0297  */
    /* JADX WARN: Removed duplicated region for block: B:106:0x02b0  */
    /* JADX WARN: Removed duplicated region for block: B:117:0x025b  */
    /* JADX WARN: Removed duplicated region for block: B:124:0x0231  */
    /* JADX WARN: Removed duplicated region for block: B:39:0x0116  */
    /* JADX WARN: Removed duplicated region for block: B:50:0x0200 A[Catch: Exception -> 0x0216, TRY_LEAVE, TryCatch #0 {Exception -> 0x0216, blocks: (B:48:0x01db, B:50:0x0200), top: B:47:0x01db }] */
    /* JADX WARN: Removed duplicated region for block: B:54:0x011b  */
    /* JADX WARN: Removed duplicated region for block: B:90:0x022f  */
    /* JADX WARN: Removed duplicated region for block: B:92:0x0234  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final long a(boolean z5) {
        long j;
        boolean z6;
        long O;
        long j5;
        long j7;
        boolean z7;
        long j10;
        Method method;
        long max;
        k0 k0Var = (k0) this.a.f18811d;
        AudioTrack audioTrack = this.f12672c;
        audioTrack.getClass();
        long j11 = 1000;
        if (audioTrack.getPlayState() == 3) {
            long nanoTime = System.nanoTime() / 1000;
            if (nanoTime - this.f12680m >= 30000) {
                long O2 = ke.d0.O(this.f12676g, b());
                if (O2 != 0) {
                    int i5 = this.f12690w;
                    long y5 = ke.d0.y(O2, this.j) - nanoTime;
                    long[] jArr = this.f12671b;
                    jArr[i5] = y5;
                    this.f12690w = (this.f12690w + 1) % 10;
                    int i6 = this.f12691x;
                    if (i6 < 10) {
                        this.f12691x = i6 + 1;
                    }
                    this.f12680m = nanoTime;
                    this.f12679l = 0L;
                    int i10 = 0;
                    while (true) {
                        int i11 = this.f12691x;
                        if (i10 >= i11) {
                            break;
                        }
                        this.f12679l = (jArr[i10] / i11) + this.f12679l;
                        i10++;
                        j11 = j11;
                    }
                }
            }
            j = j11;
            if (!this.f12677h) {
                w wVar = this.f12675f;
                wVar.getClass();
                v vVar = wVar.a;
                if (vVar != null) {
                    AudioTimestamp audioTimestamp = vVar.f12657b;
                    j7 = 500000;
                    if (nanoTime - wVar.f12669e >= wVar.f12668d) {
                        wVar.f12669e = nanoTime;
                        z7 = vVar.a.getTimestamp(audioTimestamp);
                        if (z7) {
                            long j12 = audioTimestamp.framePosition;
                            if (vVar.f12659d > j12) {
                                vVar.f12658c++;
                            }
                            vVar.f12659d = j12;
                            vVar.f12660e = j12 + (vVar.f12658c << 32);
                        }
                        int i12 = wVar.f12666b;
                        if (i12 != 0) {
                            if (i12 != 1) {
                                if (i12 != 2) {
                                    if (i12 != 3) {
                                        if (i12 != 4) {
                                            throw new IllegalStateException();
                                        }
                                    } else if (z7) {
                                        wVar.a();
                                    }
                                } else if (!z7) {
                                    wVar.a();
                                }
                            } else if (!z7) {
                                wVar.a();
                            } else if (vVar.f12660e > wVar.f12670f) {
                                wVar.b(2);
                            }
                        } else if (z7) {
                            if (audioTimestamp.nanoTime / j >= wVar.f12667c) {
                                wVar.f12670f = vVar.f12660e;
                                wVar.b(1);
                            }
                        } else if (nanoTime - wVar.f12667c > 500000) {
                            wVar.b(3);
                        }
                        if (z7) {
                            j10 = 5000000;
                        } else {
                            long j13 = vVar != null ? vVar.f12657b.nanoTime / j : -9223372036854775807L;
                            long j14 = vVar != null ? vVar.f12660e : -1L;
                            long O3 = ke.d0.O(this.f12676g, b());
                            j10 = 5000000;
                            if (Math.abs(j13 - nanoTime) > 5000000) {
                                StringBuilder n6 = k0.d.n(j14, "Spurious audio timestamp (system clock mismatch): ", ", ");
                                n6.append(j13);
                                n6.append(", ");
                                n6.append(nanoTime);
                                n6.append(", ");
                                n6.append(O3);
                                n6.append(", ");
                                n6.append(k0Var.h());
                                n6.append(", ");
                                n6.append(k0Var.i());
                                ke.b.N("DefaultAudioSink", n6.toString());
                                wVar.b(4);
                            } else if (Math.abs(ke.d0.O(this.f12676g, j14) - O3) > 5000000) {
                                StringBuilder n10 = k0.d.n(j14, "Spurious audio timestamp (frame position mismatch): ", ", ");
                                n10.append(j13);
                                n10.append(", ");
                                n10.append(nanoTime);
                                n10.append(", ");
                                n10.append(O3);
                                n10.append(", ");
                                n10.append(k0Var.h());
                                n10.append(", ");
                                n10.append(k0Var.i());
                                ke.b.N("DefaultAudioSink", n10.toString());
                                wVar.b(4);
                            } else if (wVar.f12666b == 4) {
                                wVar.a();
                            }
                        }
                        if (this.f12684q && (method = this.f12681n) != null && nanoTime - this.f12685r >= j7) {
                            try {
                                AudioTrack audioTrack2 = this.f12672c;
                                audioTrack2.getClass();
                                Integer num = (Integer) method.invoke(audioTrack2, null);
                                int i13 = ke.d0.a;
                                long intValue = (num.intValue() * j) - this.f12678i;
                                this.f12682o = intValue;
                                max = Math.max(intValue, 0L);
                                this.f12682o = max;
                                if (max > j10) {
                                    ke.b.N("DefaultAudioSink", "Ignoring impossibly large audio latency: " + max);
                                    this.f12682o = 0L;
                                }
                            } catch (Exception unused) {
                                this.f12681n = null;
                            }
                            this.f12685r = nanoTime;
                        }
                    }
                } else {
                    j7 = 500000;
                }
                z7 = false;
                if (z7) {
                }
                if (this.f12684q) {
                    AudioTrack audioTrack22 = this.f12672c;
                    audioTrack22.getClass();
                    Integer num2 = (Integer) method.invoke(audioTrack22, null);
                    int i132 = ke.d0.a;
                    long intValue2 = (num2.intValue() * j) - this.f12678i;
                    this.f12682o = intValue2;
                    max = Math.max(intValue2, 0L);
                    this.f12682o = max;
                    if (max > j10) {
                    }
                    this.f12685r = nanoTime;
                }
            }
            long nanoTime2 = System.nanoTime() / j;
            w wVar2 = this.f12675f;
            wVar2.getClass();
            v vVar2 = wVar2.a;
            z6 = wVar2.f12666b != 2;
            if (z6) {
                O = this.f12691x == 0 ? ke.d0.O(this.f12676g, b()) : ke.d0.u(this.f12679l + nanoTime2, this.j);
                if (!z5) {
                    O = Math.max(0L, O - this.f12682o);
                }
            } else {
                O = ke.d0.u(nanoTime2 - (vVar2 != null ? vVar2.f12657b.nanoTime / j : -9223372036854775807L), this.j) + ke.d0.O(this.f12676g, vVar2 != null ? vVar2.f12660e : -1L);
            }
            if (this.E != z6) {
                this.G = this.D;
                this.F = this.C;
            }
            j5 = nanoTime2 - this.G;
            if (j5 < 1000000) {
                long u5 = ke.d0.u(j5, this.j) + this.F;
                long j15 = (j5 * j) / 1000000;
                O = (((j - j15) * u5) + (O * j15)) / j;
            }
            if (!this.k) {
                long j16 = this.C;
                if (O > j16) {
                    this.k = true;
                    long currentTimeMillis = System.currentTimeMillis() - ke.d0.U(ke.d0.y(ke.d0.U(O - j16), this.j));
                    ve.i iVar = k0Var.f12563r;
                    if (iVar != null) {
                        e4.c cVar = ((n0) iVar.f19405d).f12577d1;
                        Handler handler = (Handler) cVar.f7939e;
                        if (handler != null) {
                            handler.post(new com.discord.media.engine.video.egl_renderer.b(cVar, currentTimeMillis, 2));
                        }
                    }
                }
            }
            this.D = nanoTime2;
            this.C = O;
            this.E = z6;
            return O;
        }
        j = 1000;
        long nanoTime22 = System.nanoTime() / j;
        w wVar22 = this.f12675f;
        wVar22.getClass();
        v vVar22 = wVar22.a;
        if (wVar22.f12666b != 2) {
        }
        if (z6) {
        }
        if (this.E != z6) {
        }
        j5 = nanoTime22 - this.G;
        if (j5 < 1000000) {
        }
        if (!this.k) {
        }
        this.D = nanoTime22;
        this.C = O;
        this.E = z6;
        return O;
    }

    public final long b() {
        long elapsedRealtime = SystemClock.elapsedRealtime();
        long j = this.f12692y;
        if (j != -9223372036854775807L) {
            return Math.min(this.B, this.A + (((ke.d0.u((elapsedRealtime * 1000) - j, this.j) * this.f12676g) + 999999) / 1000000));
        }
        if (elapsedRealtime - this.f12686s >= 5) {
            AudioTrack audioTrack = this.f12672c;
            audioTrack.getClass();
            int playState = audioTrack.getPlayState();
            if (playState != 1) {
                long playbackHeadPosition = audioTrack.getPlaybackHeadPosition() & 4294967295L;
                if (this.f12677h) {
                    if (playState == 2 && playbackHeadPosition == 0) {
                        this.f12689v = this.f12687t;
                    }
                    playbackHeadPosition += this.f12689v;
                }
                if (ke.d0.a <= 29) {
                    if (playbackHeadPosition != 0 || this.f12687t <= 0 || playState != 3) {
                        this.f12693z = -9223372036854775807L;
                    } else if (this.f12693z == -9223372036854775807L) {
                        this.f12693z = elapsedRealtime;
                    }
                }
                if (this.f12687t > playbackHeadPosition) {
                    this.f12688u++;
                }
                this.f12687t = playbackHeadPosition;
            }
            this.f12686s = elapsedRealtime;
        }
        return this.f12687t + (this.f12688u << 32);
    }

    public final boolean c(long j) {
        long a = a(false);
        int i5 = this.f12676g;
        int i6 = ke.d0.a;
        if (j > ((a * i5) + 999999) / 1000000) {
            return true;
        }
        if (this.f12677h) {
            AudioTrack audioTrack = this.f12672c;
            audioTrack.getClass();
            if (audioTrack.getPlayState() == 2 && b() == 0) {
                return true;
            }
        }
        return false;
    }

    public final void d() {
        this.f12679l = 0L;
        this.f12691x = 0;
        this.f12690w = 0;
        this.f12680m = 0L;
        this.D = 0L;
        this.G = 0L;
        this.k = false;
    }
}
