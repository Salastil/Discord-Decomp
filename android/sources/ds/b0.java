package ds;

import java.util.ArrayList;
import java.util.Arrays;
import kotlin.collections.CollectionsKt;
import kotlin.collections.h0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Reflection;
import kotlin.text.StringsKt;
import kotlinx.serialization.DeserializationStrategy;
import kotlinx.serialization.descriptors.SerialDescriptor;
import kotlinx.serialization.encoding.AbstractDecoder;
import kotlinx.serialization.encoding.CompositeDecoder;
import kotlinx.serialization.encoding.Decoder;
import kotlinx.serialization.json.Json;
import kotlinx.serialization.json.JsonElement;
import kotlinx.serialization.json.JsonObject;
import kotlinx.serialization.modules.SerializersModule;

/* loaded from: classes3.dex */
public final class b0 extends AbstractDecoder implements cs.g {
    public final Json a;

    /* renamed from: b, reason: collision with root package name */
    public final g0 f7702b;

    /* renamed from: c, reason: collision with root package name */
    public final a f7703c;

    /* renamed from: d, reason: collision with root package name */
    public final SerializersModule f7704d;

    /* renamed from: e, reason: collision with root package name */
    public int f7705e;

    /* renamed from: f, reason: collision with root package name */
    public dg.b f7706f;

    /* renamed from: g, reason: collision with root package name */
    public final androidx.appcompat.widget.v f7707g;

    /* renamed from: h, reason: collision with root package name */
    public final p f7708h;

    public b0(Json json, g0 mode, a lexer, SerialDescriptor descriptor, dg.b bVar) {
        Intrinsics.checkNotNullParameter(json, "json");
        Intrinsics.checkNotNullParameter(mode, "mode");
        Intrinsics.checkNotNullParameter(lexer, "lexer");
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        this.a = json;
        this.f7702b = mode;
        this.f7703c = lexer;
        this.f7704d = json.f13607b;
        this.f7705e = -1;
        this.f7706f = bVar;
        androidx.appcompat.widget.v vVar = json.a;
        this.f7707g = vVar;
        this.f7708h = vVar.f1129e ? null : new p(descriptor);
    }

    @Override // cs.g
    public final JsonElement a() {
        return new a5.a0(this.a.a, this.f7703c).x();
    }

    @Override // cs.g
    public final Json b() {
        return this.a;
    }

    @Override // kotlinx.serialization.encoding.AbstractDecoder, kotlinx.serialization.encoding.Decoder
    public final CompositeDecoder beginStructure(SerialDescriptor sd2) {
        Intrinsics.checkNotNullParameter(sd2, "descriptor");
        Json json = this.a;
        g0 r5 = s.r(sd2, json);
        a aVar = this.f7703c;
        a1.d dVar = (a1.d) aVar.f7692c;
        Intrinsics.checkNotNullParameter(sd2, "sd");
        int i5 = dVar.f14e + 1;
        dVar.f14e = i5;
        Object[] objArr = (Object[]) dVar.f15i;
        if (i5 == objArr.length) {
            int i6 = i5 * 2;
            Object[] copyOf = Arrays.copyOf(objArr, i6);
            Intrinsics.checkNotNullExpressionValue(copyOf, "copyOf(...)");
            dVar.f15i = copyOf;
            int[] copyOf2 = Arrays.copyOf((int[]) dVar.f16v, i6);
            Intrinsics.checkNotNullExpressionValue(copyOf2, "copyOf(...)");
            dVar.f16v = copyOf2;
        }
        ((Object[]) dVar.f15i)[i5] = sd2;
        aVar.h(r5.f7728d);
        if (aVar.y() != 4) {
            int ordinal = r5.ordinal();
            return (ordinal == 1 || ordinal == 2 || ordinal == 3) ? new b0(json, r5, aVar, sd2, this.f7706f) : (this.f7702b == r5 && json.a.f1129e) ? this : new b0(json, r5, aVar, sd2, this.f7706f);
        }
        a.q(aVar, "Unexpected leading comma", 0, null, 6);
        throw null;
    }

    @Override // kotlinx.serialization.encoding.AbstractDecoder, kotlinx.serialization.encoding.Decoder
    public final boolean decodeBoolean() {
        boolean z5;
        boolean z6;
        a aVar = this.f7703c;
        int D = aVar.D();
        if (D == aVar.u().length()) {
            a.q(aVar, "EOF", 0, null, 6);
            throw null;
        }
        if (aVar.u().charAt(D) == '\"') {
            D++;
            z5 = true;
        } else {
            z5 = false;
        }
        int A = aVar.A(D);
        if (A >= aVar.u().length() || A == -1) {
            a.q(aVar, "EOF", 0, null, 6);
            throw null;
        }
        int i5 = A + 1;
        int charAt = aVar.u().charAt(A) | ' ';
        if (charAt == 102) {
            aVar.d(i5, "alse");
            z6 = false;
        } else {
            if (charAt != 116) {
                a.q(aVar, "Expected valid boolean literal prefix, but had '" + aVar.l() + '\'', 0, null, 6);
                throw null;
            }
            aVar.d(i5, "rue");
            z6 = true;
        }
        if (!z5) {
            return z6;
        }
        if (aVar.f7691b == aVar.u().length()) {
            a.q(aVar, "EOF", 0, null, 6);
            throw null;
        }
        if (aVar.u().charAt(aVar.f7691b) == '\"') {
            aVar.f7691b++;
            return z6;
        }
        a.q(aVar, "Expected closing quotation mark", 0, null, 6);
        throw null;
    }

    @Override // kotlinx.serialization.encoding.AbstractDecoder, kotlinx.serialization.encoding.Decoder
    public final byte decodeByte() {
        a aVar = this.f7703c;
        long i5 = aVar.i();
        byte b10 = (byte) i5;
        if (i5 == b10) {
            return b10;
        }
        a.q(aVar, "Failed to parse byte for input '" + i5 + '\'', 0, null, 6);
        throw null;
    }

    @Override // kotlinx.serialization.encoding.AbstractDecoder, kotlinx.serialization.encoding.Decoder
    public final char decodeChar() {
        a aVar = this.f7703c;
        String l6 = aVar.l();
        if (l6.length() == 1) {
            return l6.charAt(0);
        }
        a.q(aVar, k0.d.h('\'', "Expected single char, but got '", l6), 0, null, 6);
        throw null;
    }

    @Override // kotlinx.serialization.encoding.AbstractDecoder, kotlinx.serialization.encoding.Decoder
    public final double decodeDouble() {
        a aVar = this.f7703c;
        String l6 = aVar.l();
        try {
            double parseDouble = Double.parseDouble(l6);
            if (!Double.isInfinite(parseDouble) && !Double.isNaN(parseDouble)) {
                return parseDouble;
            }
            s.s(aVar, Double.valueOf(parseDouble));
            throw null;
        } catch (IllegalArgumentException unused) {
            a.q(aVar, k0.d.h('\'', "Failed to parse type 'double' for input '", l6), 0, null, 6);
            throw null;
        }
    }

    /* JADX WARN: Code restructure failed: missing block: B:59:0x00e7, code lost:
    
        kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, "key");
        r2.p(kotlin.text.StringsKt.M(0, 6, r2.E(0, r2.f7691b), r5), k0.d.h('\'', "Encountered an unknown key '", r5), "Use 'ignoreUnknownKeys = true' in 'Json {}' builder to ignore unknown keys.");
     */
    /* JADX WARN: Code restructure failed: missing block: B:60:0x0103, code lost:
    
        throw null;
     */
    /* JADX WARN: Multi-variable type inference failed */
    @Override // kotlinx.serialization.encoding.CompositeDecoder
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final int decodeElementIndex(SerialDescriptor descriptor) {
        a aVar = this.f7703c;
        a1.d dVar = (a1.d) aVar.f7692c;
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        g0 g0Var = this.f7702b;
        int ordinal = g0Var.ordinal();
        char c6 = ':';
        int i5 = 0;
        r9 = false;
        boolean z5 = false;
        int i6 = -1;
        if (ordinal == 0) {
            boolean F = aVar.F();
            while (true) {
                boolean c8 = aVar.c();
                p pVar = this.f7708h;
                if (c8) {
                    String key = aVar.e();
                    aVar.h(c6);
                    int l6 = s.l(descriptor, this.a, key);
                    if (l6 != -3) {
                        if (pVar != null) {
                            bs.z zVar = pVar.a;
                            if (l6 < 64) {
                                zVar.f3261c |= 1 << l6;
                            } else {
                                int i10 = (l6 >>> 6) - 1;
                                long[] jArr = zVar.f3262d;
                                jArr[i10] = jArr[i10] | (1 << (l6 & 63));
                            }
                        }
                        i6 = l6;
                    } else {
                        if (!this.f7707g.f1128d) {
                            dg.b bVar = this.f7706f;
                            if (bVar == null || !Intrinsics.areEqual(bVar.a, key)) {
                                break;
                            }
                            bVar.a = null;
                        }
                        ArrayList arrayList = new ArrayList();
                        byte y5 = aVar.y();
                        if (y5 == 8 || y5 == 6) {
                            while (true) {
                                byte y6 = aVar.y();
                                if (y6 == 1) {
                                    aVar.e();
                                } else {
                                    if (y6 == 8 || y6 == 6) {
                                        arrayList.add(Byte.valueOf(y6));
                                    } else if (y6 == 9) {
                                        if (((Number) CollectionsKt.Q(arrayList)).byteValue() != 8) {
                                            throw s.d(aVar.f7691b, aVar.u(), "found ] instead of } at path: " + dVar);
                                        }
                                        h0.u(arrayList);
                                    } else if (y6 == 7) {
                                        if (((Number) CollectionsKt.Q(arrayList)).byteValue() != 6) {
                                            throw s.d(aVar.f7691b, aVar.u(), "found } instead of ] at path: " + dVar);
                                        }
                                        h0.u(arrayList);
                                    } else if (y6 == 10) {
                                        a.q(aVar, "Unexpected end of input due to malformed JSON during ignoring unknown keys", 0, null, 6);
                                        throw null;
                                    }
                                    aVar.f();
                                    if (arrayList.size() == 0) {
                                        break;
                                    }
                                }
                            }
                        } else {
                            aVar.l();
                        }
                        F = aVar.F();
                        c6 = ':';
                    }
                } else {
                    if (F) {
                        s.n(aVar, "object");
                        throw null;
                    }
                    if (pVar != null) {
                        bs.z zVar2 = pVar.a;
                        o oVar = zVar2.f3260b;
                        SerialDescriptor serialDescriptor = zVar2.a;
                        int f2 = serialDescriptor.f();
                        while (true) {
                            long j = zVar2.f3261c;
                            long j5 = -1;
                            if (j != -1) {
                                int numberOfTrailingZeros = Long.numberOfTrailingZeros(~j);
                                zVar2.f3261c |= 1 << numberOfTrailingZeros;
                                if (((Boolean) oVar.invoke(serialDescriptor, Integer.valueOf(numberOfTrailingZeros))).booleanValue()) {
                                    i6 = numberOfTrailingZeros;
                                    break;
                                }
                            } else if (f2 > 64) {
                                long[] jArr2 = zVar2.f3262d;
                                int length = jArr2.length;
                                loop3: while (i5 < length) {
                                    int i11 = i5 + 1;
                                    int i12 = i11 * 64;
                                    long j7 = jArr2[i5];
                                    while (j7 != j5) {
                                        int numberOfTrailingZeros2 = Long.numberOfTrailingZeros(~j7);
                                        j7 |= 1 << numberOfTrailingZeros2;
                                        int i13 = numberOfTrailingZeros2 + i12;
                                        if (((Boolean) oVar.invoke(serialDescriptor, Integer.valueOf(i13))).booleanValue()) {
                                            jArr2[i5] = j7;
                                            i6 = i13;
                                            break loop3;
                                        }
                                        j5 = -1;
                                    }
                                    jArr2[i5] = j7;
                                    i5 = i11;
                                    j5 = -1;
                                }
                            }
                        }
                    }
                    i6 = -1;
                }
            }
        } else if (ordinal != 2) {
            boolean F2 = aVar.F();
            if (aVar.c()) {
                int i14 = this.f7705e;
                if (i14 != -1 && !F2) {
                    a.q(aVar, "Expected end of the array or comma", 0, null, 6);
                    throw null;
                }
                i6 = i14 + 1;
                this.f7705e = i6;
            } else if (F2) {
                s.n(aVar, "array");
                throw null;
            }
        } else {
            int i15 = this.f7705e;
            Object[] objArr = i15 % 2 != 0;
            if (objArr != true) {
                aVar.h(':');
            } else if (i15 != -1) {
                z5 = aVar.F();
            }
            if (aVar.c()) {
                if (objArr != false) {
                    if (this.f7705e == -1) {
                        int i16 = aVar.f7691b;
                        if (z5) {
                            a.q(aVar, "Unexpected leading comma", i16, null, 4);
                            throw null;
                        }
                    } else {
                        int i17 = aVar.f7691b;
                        if (!z5) {
                            a.q(aVar, "Expected comma after the key-value pair", i17, null, 4);
                            throw null;
                        }
                    }
                }
                i6 = this.f7705e + 1;
                this.f7705e = i6;
            } else if (z5) {
                s.n(aVar, "object");
                throw null;
            }
        }
        if (g0Var != g0.f7725w) {
            ((int[]) dVar.f16v)[dVar.f14e] = i6;
        }
        return i6;
    }

    @Override // kotlinx.serialization.encoding.AbstractDecoder, kotlinx.serialization.encoding.Decoder
    public final int decodeEnum(SerialDescriptor enumDescriptor) {
        Intrinsics.checkNotNullParameter(enumDescriptor, "enumDescriptor");
        a aVar = this.f7703c;
        return s.m(enumDescriptor, this.a, aVar.j(), " at path " + ((a1.d) aVar.f7692c).h());
    }

    @Override // kotlinx.serialization.encoding.AbstractDecoder, kotlinx.serialization.encoding.Decoder
    public final float decodeFloat() {
        a aVar = this.f7703c;
        String l6 = aVar.l();
        try {
            float parseFloat = Float.parseFloat(l6);
            if (!Float.isInfinite(parseFloat) && !Float.isNaN(parseFloat)) {
                return parseFloat;
            }
            s.s(aVar, Float.valueOf(parseFloat));
            throw null;
        } catch (IllegalArgumentException unused) {
            a.q(aVar, k0.d.h('\'', "Failed to parse type 'float' for input '", l6), 0, null, 6);
            throw null;
        }
    }

    @Override // kotlinx.serialization.encoding.AbstractDecoder, kotlinx.serialization.encoding.Decoder
    public final Decoder decodeInline(SerialDescriptor descriptor) {
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        return d0.a(descriptor) ? new m(this.f7703c, this.a) : super.decodeInline(descriptor);
    }

    @Override // kotlinx.serialization.encoding.AbstractDecoder, kotlinx.serialization.encoding.Decoder
    public final int decodeInt() {
        a aVar = this.f7703c;
        long i5 = aVar.i();
        int i6 = (int) i5;
        if (i5 == i6) {
            return i6;
        }
        a.q(aVar, "Failed to parse int for input '" + i5 + '\'', 0, null, 6);
        throw null;
    }

    @Override // kotlinx.serialization.encoding.AbstractDecoder, kotlinx.serialization.encoding.Decoder
    public final long decodeLong() {
        return this.f7703c.i();
    }

    @Override // kotlinx.serialization.encoding.AbstractDecoder, kotlinx.serialization.encoding.Decoder
    public final boolean decodeNotNullMark() {
        p pVar = this.f7708h;
        if (!(pVar != null ? pVar.f7740b : false)) {
            a aVar = this.f7703c;
            int A = aVar.A(aVar.D());
            int length = aVar.u().length() - A;
            boolean z5 = false;
            if (length >= 4 && A != -1) {
                int i5 = 0;
                while (true) {
                    if (i5 < 4) {
                        if ("null".charAt(i5) != aVar.u().charAt(A + i5)) {
                            break;
                        }
                        i5++;
                    } else if (length <= 4 || s.h(aVar.u().charAt(A + 4)) != 0) {
                        z5 = true;
                        aVar.f7691b = A + 4;
                    }
                }
            }
            if (!z5) {
                return true;
            }
        }
        return false;
    }

    @Override // kotlinx.serialization.encoding.AbstractDecoder, kotlinx.serialization.encoding.Decoder
    public final Void decodeNull() {
        return null;
    }

    @Override // kotlinx.serialization.encoding.AbstractDecoder, kotlinx.serialization.encoding.CompositeDecoder
    public final Object decodeSerializableElement(SerialDescriptor descriptor, int i5, DeserializationStrategy deserializer, Object obj) {
        a1.d dVar = (a1.d) this.f7703c.f7692c;
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        Intrinsics.checkNotNullParameter(deserializer, "deserializer");
        boolean z5 = this.f7702b == g0.f7725w && (i5 & 1) == 0;
        if (z5) {
            int[] iArr = (int[]) dVar.f16v;
            int i6 = dVar.f14e;
            if (iArr[i6] == -2) {
                ((Object[]) dVar.f15i)[i6] = t.a;
            }
        }
        Object decodeSerializableElement = super.decodeSerializableElement(descriptor, i5, deserializer, obj);
        if (z5) {
            int[] iArr2 = (int[]) dVar.f16v;
            int i10 = dVar.f14e;
            if (iArr2[i10] != -2) {
                int i11 = i10 + 1;
                dVar.f14e = i11;
                Object[] objArr = (Object[]) dVar.f15i;
                if (i11 == objArr.length) {
                    int i12 = i11 * 2;
                    Object[] copyOf = Arrays.copyOf(objArr, i12);
                    Intrinsics.checkNotNullExpressionValue(copyOf, "copyOf(...)");
                    dVar.f15i = copyOf;
                    int[] copyOf2 = Arrays.copyOf((int[]) dVar.f16v, i12);
                    Intrinsics.checkNotNullExpressionValue(copyOf2, "copyOf(...)");
                    dVar.f16v = copyOf2;
                }
            }
            Object[] objArr2 = (Object[]) dVar.f15i;
            int i13 = dVar.f14e;
            objArr2[i13] = decodeSerializableElement;
            ((int[]) dVar.f16v)[i13] = -2;
        }
        return decodeSerializableElement;
    }

    /* JADX WARN: Removed duplicated region for block: B:36:0x0116  */
    /* JADX WARN: Removed duplicated region for block: B:37:0x0117  */
    @Override // kotlinx.serialization.encoding.AbstractDecoder, kotlinx.serialization.encoding.Decoder
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object decodeSerializableValue(DeserializationStrategy deserializer) {
        String message;
        Json json = this.a;
        a aVar = this.f7703c;
        a1.d dVar = (a1.d) aVar.f7692c;
        Intrinsics.checkNotNullParameter(deserializer, "deserializer");
        try {
        } catch (xr.a e9) {
            message = e9.getMessage();
            Intrinsics.checkNotNull(message);
            if (!StringsKt.D(message, "at path", false)) {
            }
        }
        if (!(deserializer instanceof bs.b)) {
            return deserializer.deserialize(this);
        }
        String i5 = s.i(((bs.b) deserializer).getDescriptor(), json);
        String x5 = aVar.x(i5);
        if (x5 != null) {
            try {
                DeserializationStrategy k = ys.l.k((bs.b) deserializer, this, x5);
                Intrinsics.checkNotNull(k, "null cannot be cast to non-null type kotlinx.serialization.DeserializationStrategy<T of kotlinx.serialization.json.internal.StreamingJsonDecoder.decodeSerializableValue>");
                dg.b bVar = new dg.b();
                bVar.a = i5;
                this.f7706f = bVar;
                return k.deserialize(this);
            } catch (xr.f e10) {
                String message2 = e10.getMessage();
                Intrinsics.checkNotNull(message2);
                String O = StringsKt.O(StringsKt.X(message2, '\n'), ".");
                String message3 = e10.getMessage();
                Intrinsics.checkNotNull(message3);
                a.q(aVar, O, 0, StringsKt.U('\n', message3, ""), 2);
                throw null;
            }
        }
        String i6 = s.i(((bs.b) deserializer).getDescriptor(), json);
        JsonElement a = a();
        String a10 = ((bs.b) deserializer).getDescriptor().a();
        if (a instanceof JsonObject) {
            JsonObject jsonObject = (JsonObject) a;
            JsonElement jsonElement = (JsonElement) jsonObject.get(i6);
            try {
                DeserializationStrategy k5 = ys.l.k((bs.b) deserializer, this, jsonElement != null ? cs.h.f(cs.h.k(jsonElement)) : null);
                Intrinsics.checkNotNull(k5, "null cannot be cast to non-null type kotlinx.serialization.DeserializationStrategy<T of kotlinx.serialization.json.internal.PolymorphicKt.decodeSerializableValuePolymorphic>");
                return s.q(json, i6, jsonObject, k5);
            } catch (xr.f e11) {
                String message4 = e11.getMessage();
                Intrinsics.checkNotNull(message4);
                throw s.d(-1, jsonObject.toString(), message4);
            }
        }
        throw s.d(-1, a.toString(), "Expected " + Reflection.getOrCreateKotlinClass(JsonObject.class).getSimpleName() + ", but had " + Reflection.getOrCreateKotlinClass(a.getClass()).getSimpleName() + " as the serialized body of " + a10 + " at element: " + dVar.h());
        message = e9.getMessage();
        Intrinsics.checkNotNull(message);
        if (!StringsKt.D(message, "at path", false)) {
            throw e9;
        }
        throw new xr.a(e9.f20554d, e9.getMessage() + " at path: " + dVar.h(), e9);
    }

    @Override // kotlinx.serialization.encoding.AbstractDecoder, kotlinx.serialization.encoding.Decoder
    public final short decodeShort() {
        a aVar = this.f7703c;
        long i5 = aVar.i();
        short s2 = (short) i5;
        if (i5 == s2) {
            return s2;
        }
        a.q(aVar, "Failed to parse short for input '" + i5 + '\'', 0, null, 6);
        throw null;
    }

    @Override // kotlinx.serialization.encoding.AbstractDecoder, kotlinx.serialization.encoding.Decoder
    public final String decodeString() {
        return this.f7703c.j();
    }

    @Override // kotlinx.serialization.encoding.AbstractDecoder, kotlinx.serialization.encoding.CompositeDecoder
    public final void endStructure(SerialDescriptor descriptor) {
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        if (this.a.a.f1128d && descriptor.f() == 0) {
            while (decodeElementIndex(descriptor) != -1) {
            }
        }
        a aVar = this.f7703c;
        if (aVar.F()) {
            s.n(aVar, "");
            throw null;
        }
        aVar.h(this.f7702b.f7729e);
        a1.d dVar = (a1.d) aVar.f7692c;
        int i5 = dVar.f14e;
        int[] iArr = (int[]) dVar.f16v;
        if (iArr[i5] == -2) {
            iArr[i5] = -1;
            dVar.f14e = i5 - 1;
        }
        int i6 = dVar.f14e;
        if (i6 != -1) {
            dVar.f14e = i6 - 1;
        }
    }

    @Override // kotlinx.serialization.encoding.Decoder, kotlinx.serialization.encoding.CompositeDecoder
    public final SerializersModule getSerializersModule() {
        return this.f7704d;
    }
}
