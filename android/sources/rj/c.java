package rj;

import a5.a0;
import c5.e;
import com.discord.media.engine.MediaEngine;

/* loaded from: classes3.dex */
public final class c {

    /* renamed from: h, reason: collision with root package name */
    public static final c[] f17394h = {new c(1, 10, 10, 8, 8, new a0(5, new e(1, 3, 8))), new c(2, 12, 12, 10, 10, new a0(7, new e(1, 5, 8))), new c(3, 14, 14, 12, 12, new a0(10, new e(1, 8, 8))), new c(4, 16, 16, 14, 14, new a0(12, new e(1, 12, 8))), new c(5, 18, 18, 16, 16, new a0(14, new e(1, 18, 8))), new c(6, 20, 20, 18, 18, new a0(18, new e(1, 22, 8))), new c(7, 22, 22, 20, 20, new a0(20, new e(1, 30, 8))), new c(8, 24, 24, 22, 22, new a0(24, new e(1, 36, 8))), new c(9, 26, 26, 24, 24, new a0(28, new e(1, 44, 8))), new c(10, 32, 32, 14, 14, new a0(36, new e(1, 62, 8))), new c(11, 36, 36, 16, 16, new a0(42, new e(1, 86, 8))), new c(12, 40, 40, 18, 18, new a0(48, new e(1, MediaEngine.MAX_SUPPORTED_PROTOCOL_VERSION, 8))), new c(13, 44, 44, 20, 20, new a0(56, new e(1, 144, 8))), new c(14, 48, 48, 22, 22, new a0(68, new e(1, 174, 8))), new c(15, 52, 52, 24, 24, new a0(42, new e(2, 102, 8))), new c(16, 64, 64, 14, 14, new a0(56, new e(2, 140, 8))), new c(17, 72, 72, 16, 16, new a0(36, new e(4, 92, 8))), new c(18, 80, 80, 18, 18, new a0(48, new e(4, MediaEngine.MAX_SUPPORTED_PROTOCOL_VERSION, 8))), new c(19, 88, 88, 20, 20, new a0(56, new e(4, 144, 8))), new c(20, 96, 96, 22, 22, new a0(68, new e(4, 174, 8))), new c(21, 104, 104, 24, 24, new a0(56, new e(6, 136, 8))), new c(22, 120, 120, 18, 18, new a0(68, new e(6, 175, 8))), new c(23, 132, 132, 20, 20, new a0(62, new e(8, 163, 8))), new c(24, 144, 144, 22, 22, new a0(new e(8, 156, 8), new e(2, 155, 8))), new c(25, 8, 18, 6, 16, new a0(7, new e(1, 5, 8))), new c(26, 8, 32, 6, 14, new a0(11, new e(1, 10, 8))), new c(27, 12, 26, 10, 24, new a0(14, new e(1, 16, 8))), new c(28, 12, 36, 10, 16, new a0(18, new e(1, 22, 8))), new c(29, 16, 36, 14, 16, new a0(24, new e(1, 32, 8))), new c(30, 16, 48, 14, 22, new a0(28, new e(1, 49, 8)))};
    public final int a;

    /* renamed from: b, reason: collision with root package name */
    public final int f17395b;

    /* renamed from: c, reason: collision with root package name */
    public final int f17396c;

    /* renamed from: d, reason: collision with root package name */
    public final int f17397d;

    /* renamed from: e, reason: collision with root package name */
    public final int f17398e;

    /* renamed from: f, reason: collision with root package name */
    public final a0 f17399f;

    /* renamed from: g, reason: collision with root package name */
    public final int f17400g;

    public c(int i5, int i6, int i10, int i11, int i12, a0 a0Var) {
        this.a = i5;
        this.f17395b = i6;
        this.f17396c = i10;
        this.f17397d = i11;
        this.f17398e = i12;
        this.f17399f = a0Var;
        int i13 = a0Var.f124e;
        int i14 = 0;
        for (e eVar : (e[]) a0Var.f125i) {
            i14 += (eVar.f3329c + i13) * eVar.f3328b;
        }
        this.f17400g = i14;
    }

    public final String toString() {
        return String.valueOf(this.a);
    }
}
