package e4;

import androidx.recyclerview.widget.RecyclerView;
import androidx.work.OverwritingInputMerger;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.LongCompanionObject;
import v3.x;
import v3.y;

/* loaded from: classes.dex */
public final class o {
    public final String a;

    /* renamed from: b, reason: collision with root package name */
    public y f7967b;

    /* renamed from: c, reason: collision with root package name */
    public final String f7968c;

    /* renamed from: d, reason: collision with root package name */
    public final String f7969d;

    /* renamed from: e, reason: collision with root package name */
    public v3.f f7970e;

    /* renamed from: f, reason: collision with root package name */
    public final v3.f f7971f;

    /* renamed from: g, reason: collision with root package name */
    public final long f7972g;

    /* renamed from: h, reason: collision with root package name */
    public final long f7973h;

    /* renamed from: i, reason: collision with root package name */
    public final long f7974i;
    public final v3.e j;
    public final int k;

    /* renamed from: l, reason: collision with root package name */
    public final v3.a f7975l;

    /* renamed from: m, reason: collision with root package name */
    public final long f7976m;

    /* renamed from: n, reason: collision with root package name */
    public long f7977n;

    /* renamed from: o, reason: collision with root package name */
    public final long f7978o;

    /* renamed from: p, reason: collision with root package name */
    public final long f7979p;

    /* renamed from: q, reason: collision with root package name */
    public boolean f7980q;

    /* renamed from: r, reason: collision with root package name */
    public x f7981r;

    /* renamed from: s, reason: collision with root package name */
    public final int f7982s;

    /* renamed from: t, reason: collision with root package name */
    public final int f7983t;

    /* renamed from: u, reason: collision with root package name */
    public final long f7984u;

    /* renamed from: v, reason: collision with root package name */
    public final int f7985v;

    /* renamed from: w, reason: collision with root package name */
    public final int f7986w;

    static {
        Intrinsics.checkNotNullExpressionValue(v3.p.f("WorkSpec"), "tagWithPrefix(\"WorkSpec\")");
    }

    public o(String id2, y state, String workerClassName, String inputMergerClassName, v3.f input, v3.f output, long j, long j5, long j7, v3.e constraints, int i5, v3.a backoffPolicy, long j10, long j11, long j12, long j13, boolean z5, x outOfQuotaPolicy, int i6, int i10, long j14, int i11, int i12) {
        Intrinsics.checkNotNullParameter(id2, "id");
        Intrinsics.checkNotNullParameter(state, "state");
        Intrinsics.checkNotNullParameter(workerClassName, "workerClassName");
        Intrinsics.checkNotNullParameter(inputMergerClassName, "inputMergerClassName");
        Intrinsics.checkNotNullParameter(input, "input");
        Intrinsics.checkNotNullParameter(output, "output");
        Intrinsics.checkNotNullParameter(constraints, "constraints");
        Intrinsics.checkNotNullParameter(backoffPolicy, "backoffPolicy");
        Intrinsics.checkNotNullParameter(outOfQuotaPolicy, "outOfQuotaPolicy");
        this.a = id2;
        this.f7967b = state;
        this.f7968c = workerClassName;
        this.f7969d = inputMergerClassName;
        this.f7970e = input;
        this.f7971f = output;
        this.f7972g = j;
        this.f7973h = j5;
        this.f7974i = j7;
        this.j = constraints;
        this.k = i5;
        this.f7975l = backoffPolicy;
        this.f7976m = j10;
        this.f7977n = j11;
        this.f7978o = j12;
        this.f7979p = j13;
        this.f7980q = z5;
        this.f7981r = outOfQuotaPolicy;
        this.f7982s = i6;
        this.f7983t = i10;
        this.f7984u = j14;
        this.f7985v = i11;
        this.f7986w = i12;
    }

    public final long a() {
        y yVar = this.f7967b;
        y yVar2 = y.f19224d;
        int i5 = this.k;
        boolean z5 = yVar == yVar2 && i5 > 0;
        long j = this.f7977n;
        boolean c6 = c();
        v3.a backoffPolicy = this.f7975l;
        Intrinsics.checkNotNullParameter(backoffPolicy, "backoffPolicy");
        long j5 = this.f7984u;
        int i6 = this.f7982s;
        if (j5 != LongCompanionObject.MAX_VALUE && c6) {
            if (i6 != 0) {
                long j7 = j + 900000;
                if (j5 < j7) {
                    return j7;
                }
            }
            return j5;
        }
        if (z5) {
            v3.a aVar = v3.a.f19181e;
            long j10 = this.f7976m;
            long scalb = backoffPolicy == aVar ? j10 * i5 : (long) Math.scalb(j10, i5 - 1);
            if (scalb > 18000000) {
                scalb = 18000000;
            }
            return j + scalb;
        }
        long j11 = this.f7972g;
        if (!c6) {
            return j == -1 ? LongCompanionObject.MAX_VALUE : j + j11;
        }
        long j12 = this.f7973h;
        long j13 = i6 == 0 ? j + j11 : j + j12;
        long j14 = this.f7974i;
        return (j14 == j12 || i6 != 0) ? j13 : (j12 - j14) + j13;
    }

    public final boolean b() {
        return !Intrinsics.areEqual(v3.e.f19193i, this.j);
    }

    public final boolean c() {
        return this.f7973h != 0;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof o)) {
            return false;
        }
        o oVar = (o) obj;
        return Intrinsics.areEqual(this.a, oVar.a) && this.f7967b == oVar.f7967b && Intrinsics.areEqual(this.f7968c, oVar.f7968c) && Intrinsics.areEqual(this.f7969d, oVar.f7969d) && Intrinsics.areEqual(this.f7970e, oVar.f7970e) && Intrinsics.areEqual(this.f7971f, oVar.f7971f) && this.f7972g == oVar.f7972g && this.f7973h == oVar.f7973h && this.f7974i == oVar.f7974i && Intrinsics.areEqual(this.j, oVar.j) && this.k == oVar.k && this.f7975l == oVar.f7975l && this.f7976m == oVar.f7976m && this.f7977n == oVar.f7977n && this.f7978o == oVar.f7978o && this.f7979p == oVar.f7979p && this.f7980q == oVar.f7980q && this.f7981r == oVar.f7981r && this.f7982s == oVar.f7982s && this.f7983t == oVar.f7983t && this.f7984u == oVar.f7984u && this.f7985v == oVar.f7985v && this.f7986w == oVar.f7986w;
    }

    /* JADX WARN: Multi-variable type inference failed */
    public final int hashCode() {
        int g6 = com.discord.chat.bridge.botuikit.a.g(this.f7979p, com.discord.chat.bridge.botuikit.a.g(this.f7978o, com.discord.chat.bridge.botuikit.a.g(this.f7977n, com.discord.chat.bridge.botuikit.a.g(this.f7976m, (this.f7975l.hashCode() + com.discord.chat.bridge.botuikit.a.u(this.k, (this.j.hashCode() + com.discord.chat.bridge.botuikit.a.g(this.f7974i, com.discord.chat.bridge.botuikit.a.g(this.f7973h, com.discord.chat.bridge.botuikit.a.g(this.f7972g, (this.f7971f.hashCode() + ((this.f7970e.hashCode() + a3.e.d(a3.e.d((this.f7967b.hashCode() + (this.a.hashCode() * 31)) * 31, 31, this.f7968c), 31, this.f7969d)) * 31)) * 31, 31), 31), 31)) * 31, 31)) * 31, 31), 31), 31), 31);
        boolean z5 = this.f7980q;
        int i5 = z5;
        if (z5 != 0) {
            i5 = 1;
        }
        return Integer.hashCode(this.f7986w) + com.discord.chat.bridge.botuikit.a.u(this.f7985v, com.discord.chat.bridge.botuikit.a.g(this.f7984u, com.discord.chat.bridge.botuikit.a.u(this.f7983t, com.discord.chat.bridge.botuikit.a.u(this.f7982s, (this.f7981r.hashCode() + ((g6 + i5) * 31)) * 31, 31), 31), 31), 31);
    }

    public final String toString() {
        return s4.h.h(new StringBuilder("{WorkSpec: "), this.a, '}');
    }

    /* JADX WARN: Illegal instructions before constructor call */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public /* synthetic */ o(String str, y yVar, String str2, String str3, v3.f fVar, v3.f fVar2, long j, long j5, long j7, v3.e eVar, int i5, v3.a aVar, long j10, long j11, long j12, long j13, boolean z5, x xVar, int i6, long j14, int i10, int i11, int i12) {
        this(str, r4, str2, r6, r7, r8, (i12 & 64) != 0 ? 0L : j, (i12 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) != 0 ? 0L : j5, (i12 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) != 0 ? 0L : j7, (i12 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING) != 0 ? v3.e.f19193i : eVar, (i12 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET) != 0 ? 0 : i5, (i12 & RecyclerView.ItemAnimator.FLAG_MOVED) != 0 ? v3.a.f19180d : aVar, (i12 & RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT) != 0 ? 30000L : j10, (i12 & 8192) != 0 ? -1L : j11, (i12 & 16384) == 0 ? j12 : 0L, (32768 & i12) != 0 ? -1L : j13, (65536 & i12) != 0 ? false : z5, (131072 & i12) != 0 ? x.f19221d : xVar, (262144 & i12) != 0 ? 0 : i6, 0, (1048576 & i12) != 0 ? Long.MAX_VALUE : j14, (2097152 & i12) != 0 ? 0 : i10, (i12 & 4194304) != 0 ? -256 : i11);
        String str4;
        v3.f fVar3;
        v3.f fVar4;
        y yVar2 = (i12 & 2) != 0 ? y.f19224d : yVar;
        if ((i12 & 8) != 0) {
            String name = OverwritingInputMerger.class.getName();
            Intrinsics.checkNotNullExpressionValue(name, "OverwritingInputMerger::class.java.name");
            str4 = name;
        } else {
            str4 = str3;
        }
        if ((i12 & 16) != 0) {
            v3.f EMPTY = v3.f.f19202c;
            Intrinsics.checkNotNullExpressionValue(EMPTY, "EMPTY");
            fVar3 = EMPTY;
        } else {
            fVar3 = fVar;
        }
        if ((i12 & 32) != 0) {
            v3.f EMPTY2 = v3.f.f19202c;
            Intrinsics.checkNotNullExpressionValue(EMPTY2, "EMPTY");
            fVar4 = EMPTY2;
        } else {
            fVar4 = fVar2;
        }
    }
}
