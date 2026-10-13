package com.google.android.exoplayer2;

import android.os.Looper;
import android.util.SparseBooleanArray;
import android.view.SurfaceView;
import android.view.TextureView;
import com.google.android.exoplayer2.text.CueGroup;
import com.google.android.exoplayer2.video.VideoSize;
import java.util.Arrays;
import ke.d0;
import w3.q;

/* loaded from: classes3.dex */
public interface Player {

    public static final class Commands implements hc.g {

        /* renamed from: d, reason: collision with root package name */
        public final ke.g f5278d;

        static {
            SparseBooleanArray sparseBooleanArray = new SparseBooleanArray();
            ke.b.k(!false);
            new ke.g(sparseBooleanArray);
            int i5 = d0.a;
            Integer.toString(0, 36);
        }

        public Commands(ke.g gVar) {
            this.f5278d = gVar;
        }

        public final boolean equals(Object obj) {
            if (this == obj) {
                return true;
            }
            if (obj instanceof Commands) {
                return this.f5278d.equals(((Commands) obj).f5278d);
            }
            return false;
        }

        public final int hashCode() {
            return this.f5278d.hashCode();
        }
    }

    public static final class Events {
        public final ke.g a;

        public Events(ke.g gVar) {
            this.a = gVar;
        }

        public final boolean a(int... iArr) {
            for (int i5 : iArr) {
                if (this.a.a.get(i5)) {
                    return true;
                }
            }
            return false;
        }

        public final boolean equals(Object obj) {
            if (this == obj) {
                return true;
            }
            if (obj instanceof Events) {
                return this.a.equals(((Events) obj).a);
            }
            return false;
        }

        public final int hashCode() {
            return this.a.hashCode();
        }
    }

    public static final class PositionInfo implements hc.g {
        public final int E;
        public final int F;

        /* renamed from: d, reason: collision with root package name */
        public final Object f5279d;

        /* renamed from: e, reason: collision with root package name */
        public final int f5280e;

        /* renamed from: i, reason: collision with root package name */
        public final MediaItem f5281i;

        /* renamed from: v, reason: collision with root package name */
        public final Object f5282v;

        /* renamed from: w, reason: collision with root package name */
        public final int f5283w;

        /* renamed from: x, reason: collision with root package name */
        public final long f5284x;

        /* renamed from: y, reason: collision with root package name */
        public final long f5285y;

        static {
            int i5 = d0.a;
            Integer.toString(0, 36);
            Integer.toString(1, 36);
            Integer.toString(2, 36);
            Integer.toString(3, 36);
            Integer.toString(4, 36);
            Integer.toString(5, 36);
            Integer.toString(6, 36);
        }

        public PositionInfo(Object obj, int i5, MediaItem mediaItem, Object obj2, int i6, long j, long j5, int i10, int i11) {
            this.f5279d = obj;
            this.f5280e = i5;
            this.f5281i = mediaItem;
            this.f5282v = obj2;
            this.f5283w = i6;
            this.f5284x = j;
            this.f5285y = j5;
            this.E = i10;
            this.F = i11;
        }

        public final boolean equals(Object obj) {
            if (this == obj) {
                return true;
            }
            if (obj != null && PositionInfo.class == obj.getClass()) {
                PositionInfo positionInfo = (PositionInfo) obj;
                if (this.f5280e == positionInfo.f5280e && this.f5283w == positionInfo.f5283w && this.f5284x == positionInfo.f5284x && this.f5285y == positionInfo.f5285y && this.E == positionInfo.E && this.F == positionInfo.F && q.j(this.f5279d, positionInfo.f5279d) && q.j(this.f5282v, positionInfo.f5282v) && q.j(this.f5281i, positionInfo.f5281i)) {
                    return true;
                }
            }
            return false;
        }

        public final int hashCode() {
            return Arrays.hashCode(new Object[]{this.f5279d, Integer.valueOf(this.f5280e), this.f5281i, this.f5282v, Integer.valueOf(this.f5283w), Long.valueOf(this.f5284x), Long.valueOf(this.f5285y), Integer.valueOf(this.E), Integer.valueOf(this.F)});
        }
    }

    c A();

    void B();

    int C();

    int D();

    boolean E(int i5);

    void F(int i5);

    void G(SurfaceView surfaceView);

    int H();

    int I();

    Timeline J();

    Looper K();

    boolean L();

    long M();

    void N();

    void O();

    void P(TextureView textureView);

    void Q();

    MediaMetadata R();

    long S();

    long T();

    void a();

    PlaybackParameters b();

    boolean c();

    long d();

    void e(int i5, long j);

    Commands f();

    boolean g();

    long getDuration();

    void h(boolean z5);

    void i();

    int j();

    void k(TextureView textureView);

    VideoSize l();

    void m(h hVar);

    void n();

    int o();

    void p(SurfaceView surfaceView);

    void pause();

    void q();

    void r(boolean z5);

    long s();

    long t();

    void u(h hVar);

    long v();

    int w();

    Tracks x();

    boolean y();

    CueGroup z();
}
