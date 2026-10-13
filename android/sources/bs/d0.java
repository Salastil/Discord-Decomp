package bs;

import com.discord.reactevents.ReactEvent;
import java.lang.annotation.Annotation;
import java.util.Arrays;
import kotlin.Unit;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.serialization.KSerializer;
import kotlinx.serialization.descriptors.SerialDescriptor;
import kotlinx.serialization.encoding.CompositeDecoder;
import kotlinx.serialization.encoding.Decoder;
import kotlinx.serialization.encoding.Encoder;

/* loaded from: classes3.dex */
public final class d0 implements KSerializer {
    public final /* synthetic */ int a = 1;

    /* renamed from: b, reason: collision with root package name */
    public final Object f3173b;

    /* renamed from: c, reason: collision with root package name */
    public Object f3174c;

    /* renamed from: d, reason: collision with root package name */
    public final Object f3175d;

    public d0(Object objectInstance, String serialName) {
        Intrinsics.checkNotNullParameter(serialName, "serialName");
        Intrinsics.checkNotNullParameter(objectInstance, "objectInstance");
        this.f3173b = objectInstance;
        this.f3174c = kotlin.collections.m0.f13512d;
        this.f3175d = fo.l.b(fo.m.f8827e, new c0(serialName, this, 1));
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    public final Object deserialize(Decoder decoder) {
        int decodeElementIndex;
        int i5 = this.a;
        Object obj = this.f3173b;
        switch (i5) {
            case 0:
                Enum[] enumArr = (Enum[]) obj;
                Intrinsics.checkNotNullParameter(decoder, "decoder");
                int decodeEnum = decoder.decodeEnum(getDescriptor());
                if (decodeEnum >= 0 && decodeEnum < enumArr.length) {
                    return enumArr[decodeEnum];
                }
                throw new xr.f(decodeEnum + " is not among valid " + getDescriptor().a() + " enum values, values size is " + enumArr.length);
            default:
                Intrinsics.checkNotNullParameter(decoder, "decoder");
                SerialDescriptor descriptor = getDescriptor();
                CompositeDecoder beginStructure = decoder.beginStructure(descriptor);
                if (!beginStructure.decodeSequentially() && (decodeElementIndex = beginStructure.decodeElementIndex(getDescriptor())) != -1) {
                    throw new xr.f(k0.d.i(decodeElementIndex, "Unexpected index "));
                }
                Unit unit = Unit.a;
                beginStructure.endStructure(descriptor);
                return obj;
        }
    }

    /* JADX WARN: Type inference failed for: r0v5, types: [java.lang.Object, kotlin.Lazy] */
    @Override // kotlinx.serialization.DeserializationStrategy
    public final SerialDescriptor getDescriptor() {
        switch (this.a) {
            case 0:
                return (SerialDescriptor) ((fo.u) this.f3175d).getValue();
            default:
                return (SerialDescriptor) this.f3175d.getValue();
        }
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(Encoder encoder, Object value) {
        switch (this.a) {
            case 0:
                Enum value2 = (Enum) value;
                Intrinsics.checkNotNullParameter(encoder, "encoder");
                Intrinsics.checkNotNullParameter(value2, "value");
                Enum[] enumArr = (Enum[]) this.f3173b;
                int w5 = kotlin.collections.x.w(value2, enumArr);
                if (w5 != -1) {
                    encoder.H(getDescriptor(), w5);
                    return;
                }
                StringBuilder sb2 = new StringBuilder();
                sb2.append(value2);
                sb2.append(" is not a valid enum ");
                sb2.append(getDescriptor().a());
                sb2.append(", must be one of ");
                String arrays = Arrays.toString(enumArr);
                Intrinsics.checkNotNullExpressionValue(arrays, "toString(...)");
                sb2.append(arrays);
                throw new xr.f(sb2.toString());
            default:
                Intrinsics.checkNotNullParameter(encoder, "encoder");
                Intrinsics.checkNotNullParameter(value, "value");
                encoder.beginStructure(getDescriptor()).endStructure(getDescriptor());
                return;
        }
    }

    public String toString() {
        switch (this.a) {
            case 0:
                return "kotlinx.serialization.internal.EnumSerializer<" + getDescriptor().a() + '>';
            default:
                return super.toString();
        }
    }

    /* JADX WARN: 'this' call moved to the top of the method (can break code semantics) */
    public d0(String serialName, ReactEvent objectInstance, Annotation[] classAnnotations) {
        this(objectInstance, serialName);
        Intrinsics.checkNotNullParameter(serialName, "serialName");
        Intrinsics.checkNotNullParameter(objectInstance, "objectInstance");
        Intrinsics.checkNotNullParameter(classAnnotations, "classAnnotations");
        this.f3174c = kotlin.collections.u.b(classAnnotations);
    }

    public d0(String serialName, Enum[] values) {
        Intrinsics.checkNotNullParameter(serialName, "serialName");
        Intrinsics.checkNotNullParameter(values, "values");
        this.f3173b = values;
        this.f3175d = fo.l.a(new c0(0, this, serialName));
    }
}
