package com.google.android.exoplayer2;

import com.google.android.exoplayer2.Timeline;
import ke.d0;

/* loaded from: classes3.dex */
public abstract class b implements Player {
    public final Timeline.Window a = new Timeline.Window();

    @Override // com.google.android.exoplayer2.Player
    public final void B() {
        r(true);
    }

    @Override // com.google.android.exoplayer2.Player
    public final boolean E(int i5) {
        return f().f5278d.a.get(i5);
    }

    @Override // com.google.android.exoplayer2.Player
    public final void N() {
        int e9;
        if (J().p() || c()) {
            return;
        }
        if (!V()) {
            if (Y() && X()) {
                a0(D(), -9223372036854775807L, 9, false);
                return;
            }
            return;
        }
        Timeline J = J();
        if (J.p()) {
            e9 = -1;
        } else {
            int D = D();
            int I = I();
            if (I == 1) {
                I = 0;
            }
            e9 = J.e(D, I, L());
        }
        if (e9 == -1) {
            return;
        }
        if (e9 == D()) {
            a0(D(), -9223372036854775807L, 9, true);
        } else {
            a0(e9, -9223372036854775807L, 9, false);
        }
    }

    @Override // com.google.android.exoplayer2.Player
    public final void O() {
        long S = S() + s();
        long duration = getDuration();
        if (duration != -9223372036854775807L) {
            S = Math.min(S, duration);
        }
        b0(12, Math.max(S, 0L));
    }

    @Override // com.google.android.exoplayer2.Player
    public final void Q() {
        long S = S() + (-T());
        long duration = getDuration();
        if (duration != -9223372036854775807L) {
            S = Math.min(S, duration);
        }
        b0(11, Math.max(S, 0L));
    }

    public final int U() {
        long v5 = v();
        long duration = getDuration();
        if (v5 == -9223372036854775807L || duration == -9223372036854775807L) {
            return 0;
        }
        if (duration == 0) {
            return 100;
        }
        return d0.i((int) ((v5 * 100) / duration), 0, 100);
    }

    public final boolean V() {
        int e9;
        Timeline J = J();
        if (J.p()) {
            e9 = -1;
        } else {
            int D = D();
            int I = I();
            if (I == 1) {
                I = 0;
            }
            e9 = J.e(D, I, L());
        }
        return e9 != -1;
    }

    public final boolean W() {
        int k;
        Timeline J = J();
        if (J.p()) {
            k = -1;
        } else {
            int D = D();
            int I = I();
            if (I == 1) {
                I = 0;
            }
            k = J.k(D, I, L());
        }
        return k != -1;
    }

    public final boolean X() {
        Timeline J = J();
        return !J.p() && J.m(D(), this.a, 0L).F;
    }

    public final boolean Y() {
        Timeline J = J();
        return !J.p() && J.m(D(), this.a, 0L).a();
    }

    public final boolean Z() {
        Timeline J = J();
        return !J.p() && J.m(D(), this.a, 0L).E;
    }

    public abstract void a0(int i5, long j, int i6, boolean z5);

    public final void b0(int i5, long j) {
        a0(D(), j, i5, false);
    }

    @Override // com.google.android.exoplayer2.Player
    public final void e(int i5, long j) {
        a0(i5, j, 10, false);
    }

    @Override // com.google.android.exoplayer2.Player
    public final void n() {
        a0(D(), -9223372036854775807L, 4, false);
    }

    @Override // com.google.android.exoplayer2.Player
    public final void pause() {
        r(false);
    }

    @Override // com.google.android.exoplayer2.Player
    public final void q() {
        int k;
        int k5;
        if (!J().p() && !c()) {
            boolean W = W();
            if (!Y() || Z()) {
                if (W) {
                    long S = S();
                    i();
                    if (S <= 3000) {
                        Timeline J = J();
                        if (J.p()) {
                            k = -1;
                        } else {
                            int D = D();
                            int I = I();
                            k = J.k(D, I != 1 ? I : 0, L());
                        }
                        if (k != -1) {
                            if (k == D()) {
                                a0(D(), -9223372036854775807L, 7, true);
                                return;
                            } else {
                                a0(k, -9223372036854775807L, 7, false);
                                return;
                            }
                        }
                    }
                }
                b0(7, 0L);
                return;
            }
            if (W) {
                Timeline J2 = J();
                if (J2.p()) {
                    k5 = -1;
                } else {
                    int D2 = D();
                    int I2 = I();
                    k5 = J2.k(D2, I2 != 1 ? I2 : 0, L());
                }
                if (k5 != -1) {
                    if (k5 == D()) {
                        a0(D(), -9223372036854775807L, 7, true);
                    } else {
                        a0(k5, -9223372036854775807L, 7, false);
                    }
                }
            }
        }
    }

    @Override // com.google.android.exoplayer2.Player
    public final boolean y() {
        return w() == 3 && g() && H() == 0;
    }
}
