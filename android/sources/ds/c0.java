package ds;

import a5.h0;
import bs.h1;
import bs.l1;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.serialization.KSerializer;
import kotlinx.serialization.SealedClassSerializer;
import kotlinx.serialization.descriptors.SerialDescriptor;
import kotlinx.serialization.encoding.CompositeEncoder;
import kotlinx.serialization.encoding.Encoder;
import kotlinx.serialization.json.Json;
import kotlinx.serialization.modules.SerializersModule;

/* loaded from: classes3.dex */
public final class c0 implements Encoder, CompositeEncoder {
    public String E;
    public String F;

    /* renamed from: d, reason: collision with root package name */
    public final h0 f7711d;

    /* renamed from: e, reason: collision with root package name */
    public final Json f7712e;

    /* renamed from: i, reason: collision with root package name */
    public final g0 f7713i;

    /* renamed from: v, reason: collision with root package name */
    public final c0[] f7714v;

    /* renamed from: w, reason: collision with root package name */
    public final SerializersModule f7715w;

    /* renamed from: x, reason: collision with root package name */
    public final androidx.appcompat.widget.v f7716x;

    /* renamed from: y, reason: collision with root package name */
    public boolean f7717y;

    public c0(h0 composer, Json json, g0 mode, c0[] c0VarArr) {
        Intrinsics.checkNotNullParameter(composer, "composer");
        Intrinsics.checkNotNullParameter(json, "json");
        Intrinsics.checkNotNullParameter(mode, "mode");
        this.f7711d = composer;
        this.f7712e = json;
        this.f7713i = mode;
        this.f7714v = c0VarArr;
        this.f7715w = json.f13607b;
        this.f7716x = json.a;
        int ordinal = mode.ordinal();
        if (c0VarArr != null) {
            c0 c0Var = c0VarArr[ordinal];
            if (c0Var == null && c0Var == this) {
                return;
            }
            c0VarArr[ordinal] = this;
        }
    }

    @Override // kotlinx.serialization.encoding.CompositeEncoder
    public final void C(l1 descriptor, int i5, byte b10) {
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        b(descriptor, i5);
        j(b10);
    }

    @Override // kotlinx.serialization.encoding.Encoder
    public final CompositeEncoder E(SerialDescriptor descriptor, int i5) {
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        return beginStructure(descriptor);
    }

    @Override // kotlinx.serialization.encoding.Encoder
    public final void H(SerialDescriptor enumDescriptor, int i5) {
        Intrinsics.checkNotNullParameter(enumDescriptor, "enumDescriptor");
        Q(enumDescriptor.g(i5));
    }

    @Override // kotlinx.serialization.encoding.CompositeEncoder
    public final boolean I(SerialDescriptor descriptor, int i5) {
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        return false;
    }

    @Override // kotlinx.serialization.encoding.CompositeEncoder
    public final void J(l1 descriptor, int i5, char c6) {
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        b(descriptor, i5);
        u(c6);
    }

    @Override // kotlinx.serialization.encoding.Encoder
    public final void K(int i5) {
        if (this.f7717y) {
            Q(String.valueOf(i5));
        } else {
            this.f7711d.t(i5);
        }
    }

    @Override // kotlinx.serialization.encoding.Encoder
    public final Encoder L(SerialDescriptor descriptor) {
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        boolean a = d0.a(descriptor);
        g0 g0Var = this.f7713i;
        Json json = this.f7712e;
        h0 h0Var = this.f7711d;
        if (a) {
            if (!(h0Var instanceof l)) {
                h0Var = new l((a5.a0) h0Var.f176i, this.f7717y);
            }
            return new c0(h0Var, json, g0Var, null);
        }
        Intrinsics.checkNotNullParameter(descriptor, "<this>");
        if (descriptor.isInline() && Intrinsics.areEqual(descriptor, cs.h.a)) {
            if (!(h0Var instanceof k)) {
                h0Var = new k((a5.a0) h0Var.f176i, this.f7717y);
            }
            return new c0(h0Var, json, g0Var, null);
        }
        if (this.E != null) {
            this.F = descriptor.a();
            return this;
        }
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        return this;
    }

    /* JADX WARN: Code restructure failed: missing block: B:49:0x003f, code lost:
    
        if (kotlin.jvm.internal.Intrinsics.areEqual(r1, zr.j.f21436w) == false) goto L21;
     */
    /* JADX WARN: Code restructure failed: missing block: B:4:0x0013, code lost:
    
        if (r1 != cs.a.f7323d) goto L20;
     */
    @Override // kotlinx.serialization.encoding.Encoder
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void M(KSerializer serializer, Object obj) {
        String i5;
        Intrinsics.checkNotNullParameter(serializer, "serializer");
        Json json = this.f7712e;
        cs.a aVar = (cs.a) json.a.f1127c;
        boolean z5 = serializer instanceof bs.b;
        if (!z5) {
            int ordinal = aVar.ordinal();
            if (ordinal != 0) {
                if (ordinal == 1) {
                    d9.a b10 = serializer.getDescriptor().b();
                    if (!Intrinsics.areEqual(b10, zr.j.f21433t)) {
                    }
                    i5 = s.i(serializer.getDescriptor(), json);
                } else if (ordinal != 2) {
                    throw new fo.n();
                }
            }
            i5 = null;
        }
        if (z5) {
            bs.b bVar = (bs.b) serializer;
            if (obj == null) {
                throw new IllegalArgumentException(("Value for serializer " + bVar.getDescriptor() + " should always be non-null. Please report issue to the kotlinx.serialization tracker.").toString());
            }
            KSerializer l6 = ys.l.l(bVar, this, obj);
            if (i5 != null && (serializer instanceof SealedClassSerializer)) {
                SerialDescriptor descriptor = l6.getDescriptor();
                Intrinsics.checkNotNullParameter(descriptor, "<this>");
                if (h1.b(descriptor).contains(i5)) {
                    StringBuilder t5 = a3.e.t("Sealed class '", l6.getDescriptor().a(), "' cannot be serialized as base class '", ((SealedClassSerializer) serializer).getDescriptor().a(), "' because it has property name that conflicts with JSON class discriminator '");
                    t5.append(i5);
                    t5.append("'. You can either change class discriminator in JsonConfiguration, rename property with @SerialName annotation or fall back to array polymorphism");
                    throw new IllegalStateException(t5.toString().toString());
                }
            }
            d9.a kind = l6.getDescriptor().b();
            Intrinsics.checkNotNullParameter(kind, "kind");
            if (kind instanceof zr.i) {
                throw new IllegalStateException("Enums cannot be serialized polymorphically with 'type' parameter. You can use 'JsonBuilder.useArrayPolymorphism' instead");
            }
            if (kind instanceof zr.f) {
                throw new IllegalStateException("Primitives cannot be serialized polymorphically with 'type' parameter. You can use 'JsonBuilder.useArrayPolymorphism' instead");
            }
            if (kind instanceof zr.d) {
                throw new IllegalStateException("Actual serializer for polymorphic cannot be polymorphic itself");
            }
            Intrinsics.checkNotNull(l6, "null cannot be cast to non-null type kotlinx.serialization.SerializationStrategy<T of kotlinx.serialization.json.internal.PolymorphicKt.encodePolymorphically>");
            serializer = l6;
        }
        if (i5 != null) {
            String a = serializer.getDescriptor().a();
            this.E = i5;
            this.F = a;
        }
        serializer.serialize(this, obj);
    }

    @Override // kotlinx.serialization.encoding.CompositeEncoder
    public final void N(SerialDescriptor descriptor, int i5, double d6) {
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        b(descriptor, i5);
        e(d6);
    }

    @Override // kotlinx.serialization.encoding.Encoder
    public final void O(long j) {
        if (this.f7717y) {
            Q(String.valueOf(j));
        } else {
            this.f7711d.u(j);
        }
    }

    @Override // kotlinx.serialization.encoding.CompositeEncoder
    public final void P(SerialDescriptor descriptor, int i5, long j) {
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        b(descriptor, i5);
        O(j);
    }

    @Override // kotlinx.serialization.encoding.Encoder
    public final void Q(String value) {
        Intrinsics.checkNotNullParameter(value, "value");
        this.f7711d.x(value);
    }

    @Override // kotlinx.serialization.encoding.Encoder
    public final void a() {
        this.f7711d.v("null");
    }

    public final void b(SerialDescriptor descriptor, int i5) {
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        int ordinal = this.f7713i.ordinal();
        h0 h0Var = this.f7711d;
        boolean z5 = true;
        if (ordinal == 1) {
            if (!h0Var.f175e) {
                h0Var.s(',');
            }
            h0Var.p();
            return;
        }
        if (ordinal == 2) {
            if (h0Var.f175e) {
                this.f7717y = true;
                h0Var.p();
                return;
            }
            if (i5 % 2 == 0) {
                h0Var.s(',');
                h0Var.p();
            } else {
                h0Var.s(':');
                h0Var.y();
                z5 = false;
            }
            this.f7717y = z5;
            return;
        }
        if (ordinal == 3) {
            if (i5 == 0) {
                this.f7717y = true;
            }
            if (i5 == 1) {
                h0Var.s(',');
                h0Var.y();
                this.f7717y = false;
                return;
            }
            return;
        }
        if (!h0Var.f175e) {
            h0Var.s(',');
        }
        h0Var.p();
        Intrinsics.checkNotNullParameter(descriptor, "<this>");
        Json json = this.f7712e;
        Intrinsics.checkNotNullParameter(json, "json");
        s.p(descriptor, json);
        Q(descriptor.g(i5));
        h0Var.s(':');
        h0Var.y();
    }

    @Override // kotlinx.serialization.encoding.Encoder
    public final CompositeEncoder beginStructure(SerialDescriptor descriptor) {
        c0 c0Var;
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        Json json = this.f7712e;
        g0 r5 = s.r(descriptor, json);
        char c6 = r5.f7728d;
        h0 h0Var = this.f7711d;
        h0Var.s(c6);
        h0Var.f175e = true;
        String str = this.E;
        if (str != null) {
            String str2 = this.F;
            if (str2 == null) {
                str2 = descriptor.a();
            }
            h0Var.p();
            Q(str);
            h0Var.s(':');
            Q(str2);
            this.E = null;
            this.F = null;
        }
        if (this.f7713i == r5) {
            return this;
        }
        c0[] c0VarArr = this.f7714v;
        return (c0VarArr == null || (c0Var = c0VarArr[r5.ordinal()]) == null) ? new c0(h0Var, json, r5, c0VarArr) : c0Var;
    }

    @Override // kotlinx.serialization.encoding.Encoder
    public final void e(double d6) {
        boolean z5 = this.f7717y;
        h0 h0Var = this.f7711d;
        if (z5) {
            Q(String.valueOf(d6));
        } else {
            ((a5.a0) h0Var.f176i).H(String.valueOf(d6));
        }
        if (Double.isInfinite(d6) || Double.isNaN(d6)) {
            throw s.b(Double.valueOf(d6), ((a5.a0) h0Var.f176i).toString());
        }
    }

    @Override // kotlinx.serialization.encoding.CompositeEncoder
    public final void endStructure(SerialDescriptor descriptor) {
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        h0 h0Var = this.f7711d;
        h0Var.getClass();
        h0Var.f175e = false;
        h0Var.s(this.f7713i.f7729e);
    }

    @Override // kotlinx.serialization.encoding.Encoder
    public final void f(short s2) {
        if (this.f7717y) {
            Q(String.valueOf((int) s2));
        } else {
            this.f7711d.w(s2);
        }
    }

    @Override // kotlinx.serialization.encoding.CompositeEncoder
    public final void g(SerialDescriptor descriptor, int i5, KSerializer serializer, Object obj) {
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        Intrinsics.checkNotNullParameter(serializer, "serializer");
        b(descriptor, i5);
        M(serializer, obj);
    }

    @Override // kotlinx.serialization.encoding.Encoder
    public final SerializersModule getSerializersModule() {
        return this.f7715w;
    }

    @Override // kotlinx.serialization.encoding.Encoder
    public final void j(byte b10) {
        if (this.f7717y) {
            Q(String.valueOf((int) b10));
        } else {
            this.f7711d.r(b10);
        }
    }

    @Override // kotlinx.serialization.encoding.Encoder
    public final void k(boolean z5) {
        if (this.f7717y) {
            Q(String.valueOf(z5));
        } else {
            ((a5.a0) this.f7711d.f176i).H(String.valueOf(z5));
        }
    }

    @Override // kotlinx.serialization.encoding.CompositeEncoder
    public final void l(SerialDescriptor descriptor, int i5, float f2) {
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        b(descriptor, i5);
        o(f2);
    }

    @Override // kotlinx.serialization.encoding.CompositeEncoder
    public final void n(int i5, int i6, SerialDescriptor descriptor) {
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        b(descriptor, i5);
        K(i6);
    }

    @Override // kotlinx.serialization.encoding.Encoder
    public final void o(float f2) {
        boolean z5 = this.f7717y;
        h0 h0Var = this.f7711d;
        if (z5) {
            Q(String.valueOf(f2));
        } else {
            ((a5.a0) h0Var.f176i).H(String.valueOf(f2));
        }
        if (Float.isInfinite(f2) || Float.isNaN(f2)) {
            throw s.b(Float.valueOf(f2), ((a5.a0) h0Var.f176i).toString());
        }
    }

    @Override // kotlinx.serialization.encoding.CompositeEncoder
    public final void r(l1 descriptor, int i5, short s2) {
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        b(descriptor, i5);
        f(s2);
    }

    @Override // kotlinx.serialization.encoding.CompositeEncoder
    public final Encoder t(l1 descriptor, int i5) {
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        b(descriptor, i5);
        return L(descriptor.i(i5));
    }

    @Override // kotlinx.serialization.encoding.Encoder
    public final void u(char c6) {
        Q(String.valueOf(c6));
    }

    @Override // kotlinx.serialization.encoding.CompositeEncoder
    public final void x(SerialDescriptor descriptor, int i5, boolean z5) {
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        b(descriptor, i5);
        k(z5);
    }

    @Override // kotlinx.serialization.encoding.CompositeEncoder
    public final void y(SerialDescriptor descriptor, int i5, String value) {
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        Intrinsics.checkNotNullParameter(value, "value");
        b(descriptor, i5);
        Q(value);
    }

    @Override // kotlinx.serialization.encoding.CompositeEncoder
    public final void z(SerialDescriptor descriptor, int i5, KSerializer serializer, Object obj) {
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        Intrinsics.checkNotNullParameter(serializer, "serializer");
        if (obj != null || this.f7716x.f1129e) {
            Intrinsics.checkNotNullParameter(descriptor, "descriptor");
            Intrinsics.checkNotNullParameter(serializer, "serializer");
            b(descriptor, i5);
            nt.a.n(this, serializer, obj);
        }
    }

    @Override // kotlinx.serialization.encoding.Encoder
    public final void w() {
    }
}
