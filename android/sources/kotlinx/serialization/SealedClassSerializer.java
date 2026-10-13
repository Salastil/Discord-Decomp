package kotlinx.serialization;

import bs.b;
import fo.l;
import fo.m;
import java.lang.annotation.Annotation;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;
import java.util.Set;
import kotlin.collections.m0;
import kotlin.collections.u;
import kotlin.collections.u0;
import kotlin.collections.v0;
import kotlin.collections.x;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Reflection;
import kotlin.reflect.KClass;
import kotlinx.serialization.descriptors.SerialDescriptor;
import kotlinx.serialization.encoding.CompositeDecoder;
import kotlinx.serialization.encoding.Encoder;

/* loaded from: classes3.dex */
public final class SealedClassSerializer extends b {
    public final KClass a;

    /* renamed from: b, reason: collision with root package name */
    public final List f13602b;

    /* renamed from: c, reason: collision with root package name */
    public final Object f13603c;

    /* renamed from: d, reason: collision with root package name */
    public final Map f13604d;

    /* renamed from: e, reason: collision with root package name */
    public final LinkedHashMap f13605e;

    public SealedClassSerializer(String serialName, KClass baseClass, KClass[] subclasses, KSerializer[] subclassSerializers) {
        Intrinsics.checkNotNullParameter(serialName, "serialName");
        Intrinsics.checkNotNullParameter(baseClass, "baseClass");
        Intrinsics.checkNotNullParameter(subclasses, "subclasses");
        Intrinsics.checkNotNullParameter(subclassSerializers, "subclassSerializers");
        this.a = baseClass;
        this.f13602b = m0.f13512d;
        this.f13603c = l.b(m.f8827e, new k6.b(12, serialName, this));
        if (subclasses.length != subclassSerializers.length) {
            throw new IllegalArgumentException("All subclasses of sealed class " + baseClass.getSimpleName() + " should be marked @Serializable");
        }
        Map m5 = v0.m(x.K(subclasses, subclassSerializers));
        this.f13604d = m5;
        Set<Map.Entry> entrySet = m5.entrySet();
        LinkedHashMap linkedHashMap = new LinkedHashMap();
        for (Map.Entry entry : entrySet) {
            String a = ((KSerializer) entry.getValue()).getDescriptor().a();
            Object obj = linkedHashMap.get(a);
            if (obj == null) {
                linkedHashMap.containsKey(a);
            }
            Map.Entry entry2 = (Map.Entry) obj;
            if (entry2 != null) {
                throw new IllegalStateException(("Multiple sealed subclasses of '" + this.a + "' have the same serial name '" + a + "': '" + entry2.getKey() + "', '" + entry.getKey() + '\'').toString());
            }
            linkedHashMap.put(a, entry);
        }
        LinkedHashMap linkedHashMap2 = new LinkedHashMap(u0.a(linkedHashMap.size()));
        for (Map.Entry entry3 : linkedHashMap.entrySet()) {
            linkedHashMap2.put(entry3.getKey(), (KSerializer) ((Map.Entry) entry3.getValue()).getValue());
        }
        this.f13605e = linkedHashMap2;
    }

    @Override // bs.b
    public final DeserializationStrategy a(CompositeDecoder decoder, String str) {
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        KSerializer kSerializer = (KSerializer) this.f13605e.get(str);
        return kSerializer != null ? kSerializer : super.a(decoder, str);
    }

    @Override // bs.b
    public final KSerializer b(Encoder encoder, Object value) {
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(value, "value");
        KSerializer kSerializer = (KSerializer) this.f13604d.get(Reflection.getOrCreateKotlinClass(value.getClass()));
        KSerializer b10 = kSerializer != null ? kSerializer : super.b(encoder, value);
        if (b10 != null) {
            return b10;
        }
        return null;
    }

    @Override // bs.b
    public final KClass c() {
        return this.a;
    }

    /* JADX WARN: Type inference failed for: r0v0, types: [java.lang.Object, kotlin.Lazy] */
    @Override // kotlinx.serialization.DeserializationStrategy
    public final SerialDescriptor getDescriptor() {
        return (SerialDescriptor) this.f13603c.getValue();
    }

    /* JADX WARN: 'this' call moved to the top of the method (can break code semantics) */
    public SealedClassSerializer(String serialName, KClass baseClass, KClass[] subclasses, KSerializer[] subclassSerializers, Annotation[] classAnnotations) {
        this(serialName, baseClass, subclasses, subclassSerializers);
        Intrinsics.checkNotNullParameter(serialName, "serialName");
        Intrinsics.checkNotNullParameter(baseClass, "baseClass");
        Intrinsics.checkNotNullParameter(subclasses, "subclasses");
        Intrinsics.checkNotNullParameter(subclassSerializers, "subclassSerializers");
        Intrinsics.checkNotNullParameter(classAnnotations, "classAnnotations");
        this.f13602b = u.b(classAnnotations);
    }
}
