package fs;

import bs.a1;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Map;
import java.util.Set;
import kotlin.collections.CollectionsKt;
import kotlin.collections.v0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.b0;
import kotlin.text.x;
import kotlinx.serialization.DeserializationStrategy;
import kotlinx.serialization.descriptors.SerialDescriptor;
import kotlinx.serialization.encoding.CompositeDecoder;
import kotlinx.serialization.modules.SerializersModule;
import s4.h;
import xr.f;
import ys.l;
import zr.j;

/* loaded from: classes3.dex */
public final class b extends a1 {

    /* renamed from: d, reason: collision with root package name */
    public final Map f9062d;

    /* renamed from: e, reason: collision with root package name */
    public final SerializersModule f9063e;

    /* renamed from: f, reason: collision with root package name */
    public int f9064f;

    /* renamed from: g, reason: collision with root package name */
    public final boolean f9065g;

    /* renamed from: h, reason: collision with root package name */
    public final int f9066h;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ a f9067i;

    public b(a aVar, Map map, SerialDescriptor descriptor) {
        Intrinsics.checkNotNullParameter(map, "map");
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        this.f9067i = aVar;
        Intrinsics.checkNotNullParameter(map, "map");
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        this.f9062d = map;
        this.f9063e = aVar.a;
        boolean z5 = Intrinsics.areEqual(descriptor.b(), j.f21434u) || Intrinsics.areEqual(descriptor.b(), j.f21435v);
        this.f9065g = z5;
        this.f9066h = z5 ? Integer.MAX_VALUE : descriptor.f();
    }

    @Override // kotlinx.serialization.encoding.Decoder
    public final CompositeDecoder beginStructure(SerialDescriptor descriptor) {
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        b other = new b(this.f9067i, this.f9062d, descriptor);
        Intrinsics.checkNotNullParameter(other, "other");
        ((ArrayList) other.f3160c).addAll((ArrayList) this.f3160c);
        return other;
    }

    @Override // kotlinx.serialization.encoding.CompositeDecoder
    public final int decodeElementIndex(SerialDescriptor descriptor) {
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        do {
            int i5 = this.f9064f;
            if (i5 >= this.f9066h) {
                return -1;
            }
            this.f9064f = i5 + 1;
            String t5 = t(descriptor, i5);
            Set<String> keySet = this.f9062d.keySet();
            if (!(keySet instanceof Collection) || !keySet.isEmpty()) {
                for (String str : keySet) {
                    if (x.o(str, t5, false) && (str.length() == t5.length() || str.charAt(t5.length()) == '.')) {
                        return this.f9064f - 1;
                    }
                }
            }
        } while (!this.f9065g);
        return -1;
    }

    @Override // bs.a1, kotlinx.serialization.encoding.Decoder
    public final Object decodeSerializableValue(DeserializationStrategy deserializer) {
        Intrinsics.checkNotNullParameter(deserializer, "deserializer");
        if (!(deserializer instanceof bs.b)) {
            return deserializer.deserialize(this);
        }
        Intrinsics.checkNotNullParameter("type", "nestedName");
        String str = (String) CollectionsKt.S((ArrayList) this.f3160c);
        if (str == null) {
            str = "";
        }
        Object obj = this.f9062d.get(d(str, "type"));
        return l.k((bs.b) deserializer, this, obj != null ? obj.toString() : null).deserialize(this);
    }

    @Override // bs.a1
    public final boolean e(Object obj) {
        String tag = (String) obj;
        Intrinsics.checkNotNullParameter(tag, "tag");
        return Boolean.parseBoolean((String) q(tag));
    }

    @Override // bs.a1
    public final byte f(Object obj) {
        String tag = (String) obj;
        Intrinsics.checkNotNullParameter(tag, "tag");
        return Byte.parseByte((String) q(tag));
    }

    @Override // bs.a1
    public final char g(Object obj) {
        String tag = (String) obj;
        Intrinsics.checkNotNullParameter(tag, "tag");
        return b0.A((CharSequence) q(tag));
    }

    @Override // kotlinx.serialization.encoding.Decoder, kotlinx.serialization.encoding.CompositeDecoder
    public final SerializersModule getSerializersModule() {
        return this.f9063e;
    }

    @Override // bs.a1
    public final double h(Object obj) {
        String tag = (String) obj;
        Intrinsics.checkNotNullParameter(tag, "tag");
        return Double.parseDouble((String) q(tag));
    }

    @Override // bs.a1
    public final int i(Object obj, SerialDescriptor enumDescriptor) {
        String tag = (String) obj;
        Intrinsics.checkNotNullParameter(tag, "tag");
        Intrinsics.checkNotNullParameter(enumDescriptor, "enumDescriptor");
        Object e9 = v0.e(this.f9062d, tag);
        if (e9 instanceof Integer) {
            return ((Number) e9).intValue();
        }
        if (!(e9 instanceof String)) {
            throw new f(h.f("Value of enum entry '", tag, "' is neither an Int nor a String"));
        }
        int e10 = enumDescriptor.e((String) e9);
        if (e10 != -3) {
            return e10;
        }
        throw new f("Enum '" + enumDescriptor.a() + "' does not contain element with name '" + e9 + '\'');
    }

    @Override // bs.a1
    public final float j(Object obj) {
        String tag = (String) obj;
        Intrinsics.checkNotNullParameter(tag, "tag");
        return Float.parseFloat((String) q(tag));
    }

    @Override // bs.a1
    public final int l(Object obj) {
        String tag = (String) obj;
        Intrinsics.checkNotNullParameter(tag, "tag");
        return Integer.parseInt((String) q(tag));
    }

    @Override // bs.a1
    public final long m(Object obj) {
        String tag = (String) obj;
        Intrinsics.checkNotNullParameter(tag, "tag");
        return Long.parseLong((String) q(tag));
    }

    @Override // bs.a1
    public final short o(Object obj) {
        String tag = (String) obj;
        Intrinsics.checkNotNullParameter(tag, "tag");
        return Short.parseShort((String) q(tag));
    }

    @Override // bs.a1
    /* renamed from: x, reason: merged with bridge method [inline-methods] */
    public final Object q(String tag) {
        Intrinsics.checkNotNullParameter(tag, "tag");
        return v0.e(this.f9062d, tag);
    }
}
