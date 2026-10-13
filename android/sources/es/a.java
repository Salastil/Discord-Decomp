package es;

import a5.n;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import kotlin.collections.n0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Reflection;
import kotlin.jvm.internal.TypeIntrinsics;
import kotlin.reflect.KClass;
import kotlinx.serialization.DeserializationStrategy;
import kotlinx.serialization.KSerializer;
import kotlinx.serialization.descriptors.SerialDescriptor;
import kotlinx.serialization.modules.SerializersModule;
import zr.d;
import zr.f;
import zr.h;
import zr.i;
import zr.j;

/* loaded from: classes3.dex */
public final class a extends SerializersModule {
    public final Map a;

    /* renamed from: b, reason: collision with root package name */
    public final Map f8224b;

    /* renamed from: c, reason: collision with root package name */
    public final Map f8225c;

    /* renamed from: d, reason: collision with root package name */
    public final Map f8226d;

    /* renamed from: e, reason: collision with root package name */
    public final Map f8227e;

    public a(n0 class2ContextualFactory, n0 polyBase2Serializers, n0 polyBase2DefaultSerializerProvider, n0 polyBase2NamedSerializers, n0 polyBase2DefaultDeserializerProvider) {
        Intrinsics.checkNotNullParameter(class2ContextualFactory, "class2ContextualFactory");
        Intrinsics.checkNotNullParameter(polyBase2Serializers, "polyBase2Serializers");
        Intrinsics.checkNotNullParameter(polyBase2DefaultSerializerProvider, "polyBase2DefaultSerializerProvider");
        Intrinsics.checkNotNullParameter(polyBase2NamedSerializers, "polyBase2NamedSerializers");
        Intrinsics.checkNotNullParameter(polyBase2DefaultDeserializerProvider, "polyBase2DefaultDeserializerProvider");
        this.a = class2ContextualFactory;
        this.f8224b = polyBase2Serializers;
        this.f8225c = polyBase2DefaultSerializerProvider;
        this.f8226d = polyBase2NamedSerializers;
        this.f8227e = polyBase2DefaultDeserializerProvider;
    }

    @Override // kotlinx.serialization.modules.SerializersModule
    public final void a(n collector) {
        Intrinsics.checkNotNullParameter(collector, "collector");
        Iterator it = this.a.entrySet().iterator();
        if (it.hasNext()) {
            Map.Entry entry = (Map.Entry) it.next();
            if (entry.getValue() != null) {
                throw new ClassCastException();
            }
            throw new fo.n();
        }
        for (Map.Entry entry2 : this.f8224b.entrySet()) {
            KClass baseClass = (KClass) entry2.getKey();
            for (Map.Entry entry3 : ((Map) entry2.getValue()).entrySet()) {
                KClass actualClass = (KClass) entry3.getKey();
                KSerializer actualSerializer = (KSerializer) entry3.getValue();
                Intrinsics.checkNotNull(baseClass, "null cannot be cast to non-null type kotlin.reflect.KClass<kotlin.Any>");
                Intrinsics.checkNotNull(actualClass, "null cannot be cast to non-null type kotlin.reflect.KClass<kotlin.Any>");
                Intrinsics.checkNotNull(actualSerializer, "null cannot be cast to non-null type kotlinx.serialization.KSerializer<T of kotlinx.serialization.internal.Platform_commonKt.cast>");
                Intrinsics.checkNotNullParameter(baseClass, "baseClass");
                Intrinsics.checkNotNullParameter(actualClass, "actualClass");
                Intrinsics.checkNotNullParameter(actualSerializer, "actualSerializer");
                SerialDescriptor descriptor = actualSerializer.getDescriptor();
                d9.a b10 = descriptor.b();
                if ((b10 instanceof d) || Intrinsics.areEqual(b10, h.f21431t)) {
                    throw new IllegalArgumentException("Serializer for " + actualClass.getSimpleName() + " can't be registered as a subclass for polymorphic serialization because its kind " + b10 + " is not concrete. To work with multiple hierarchies, register it as a base class.");
                }
                if (Intrinsics.areEqual(b10, j.f21434u) || Intrinsics.areEqual(b10, j.f21435v) || (b10 instanceof f) || (b10 instanceof i)) {
                    throw new IllegalArgumentException("Serializer for " + actualClass.getSimpleName() + " of kind " + b10 + " cannot be serialized polymorphically with class discriminator.");
                }
                int f2 = descriptor.f();
                for (int i5 = 0; i5 < f2; i5++) {
                    String g6 = descriptor.g(i5);
                    if (Intrinsics.areEqual(g6, collector.f197e)) {
                        throw new IllegalArgumentException("Polymorphic serializer for " + actualClass + " has property '" + g6 + "' that conflicts with JSON class discriminator. You can either change class discriminator in JsonConfiguration, rename property with @SerialName annotation or fall back to array polymorphism");
                    }
                }
            }
        }
        for (Map.Entry entry4 : this.f8225c.entrySet()) {
            KClass baseClass2 = (KClass) entry4.getKey();
            Function1 function1 = (Function1) entry4.getValue();
            Intrinsics.checkNotNull(baseClass2, "null cannot be cast to non-null type kotlin.reflect.KClass<kotlin.Any>");
            Intrinsics.checkNotNull(function1, "null cannot be cast to non-null type kotlin.Function1<@[ParameterName(name = \"value\")] kotlin.Any, kotlinx.serialization.SerializationStrategy<kotlin.Any>?>");
            Function1 defaultSerializerProvider = (Function1) TypeIntrinsics.beforeCheckcastToFunctionOfArity(function1, 1);
            Intrinsics.checkNotNullParameter(baseClass2, "baseClass");
            Intrinsics.checkNotNullParameter(defaultSerializerProvider, "defaultSerializerProvider");
        }
        for (Map.Entry entry5 : this.f8227e.entrySet()) {
            KClass baseClass3 = (KClass) entry5.getKey();
            Function1 function12 = (Function1) entry5.getValue();
            Intrinsics.checkNotNull(baseClass3, "null cannot be cast to non-null type kotlin.reflect.KClass<kotlin.Any>");
            Intrinsics.checkNotNull(function12, "null cannot be cast to non-null type kotlin.Function1<@[ParameterName(name = \"className\")] kotlin.String?, kotlinx.serialization.DeserializationStrategy<kotlin.Any>?>");
            Function1 defaultDeserializerProvider = (Function1) TypeIntrinsics.beforeCheckcastToFunctionOfArity(function12, 1);
            Intrinsics.checkNotNullParameter(baseClass3, "baseClass");
            Intrinsics.checkNotNullParameter(defaultDeserializerProvider, "defaultDeserializerProvider");
        }
    }

    @Override // kotlinx.serialization.modules.SerializersModule
    public final void b(KClass kClass, List typeArgumentsSerializers) {
        Intrinsics.checkNotNullParameter(kClass, "kClass");
        Intrinsics.checkNotNullParameter(typeArgumentsSerializers, "typeArgumentsSerializers");
        if (this.a.get(kClass) != null) {
            throw new ClassCastException();
        }
    }

    @Override // kotlinx.serialization.modules.SerializersModule
    public final boolean d() {
        return false;
    }

    @Override // kotlinx.serialization.modules.SerializersModule
    public final DeserializationStrategy e(String str, KClass baseClass) {
        Intrinsics.checkNotNullParameter(baseClass, "baseClass");
        Map map = (Map) this.f8226d.get(baseClass);
        KSerializer kSerializer = map != null ? (KSerializer) map.get(str) : null;
        if (!(kSerializer instanceof KSerializer)) {
            kSerializer = null;
        }
        if (kSerializer != null) {
            return kSerializer;
        }
        Object obj = this.f8227e.get(baseClass);
        Function1 function1 = TypeIntrinsics.isFunctionOfArity(obj, 1) ? (Function1) obj : null;
        if (function1 != null) {
            return (DeserializationStrategy) function1.invoke(str);
        }
        return null;
    }

    @Override // kotlinx.serialization.modules.SerializersModule
    public final KSerializer f(KClass baseClass, Object value) {
        Intrinsics.checkNotNullParameter(baseClass, "baseClass");
        Intrinsics.checkNotNullParameter(value, "value");
        if (baseClass.isInstance(value)) {
            Map map = (Map) this.f8224b.get(baseClass);
            KSerializer kSerializer = map != null ? (KSerializer) map.get(Reflection.getOrCreateKotlinClass(value.getClass())) : null;
            KSerializer kSerializer2 = kSerializer instanceof KSerializer ? kSerializer : null;
            if (kSerializer2 != null) {
                return kSerializer2;
            }
            Object obj = this.f8225c.get(baseClass);
            Function1 function1 = TypeIntrinsics.isFunctionOfArity(obj, 1) ? (Function1) obj : null;
            if (function1 != null) {
                return (KSerializer) function1.invoke(value);
            }
        }
        return null;
    }
}
