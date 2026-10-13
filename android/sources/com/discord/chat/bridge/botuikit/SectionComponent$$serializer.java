package com.discord.chat.bridge.botuikit;

import bs.h0;
import bs.h1;
import bs.j1;
import bs.o0;
import bs.v1;
import com.discord.chat.bridge.botuikit.SectionAccessory;
import com.facebook.react.devsupport.StackTraceHelper;
import ds.r;
import fo.d;
import java.util.List;
import kotlin.Lazy;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.serialization.DeserializationStrategy;
import kotlinx.serialization.KSerializer;
import kotlinx.serialization.descriptors.SerialDescriptor;
import kotlinx.serialization.encoding.CompositeDecoder;
import kotlinx.serialization.encoding.CompositeEncoder;
import kotlinx.serialization.encoding.Decoder;
import kotlinx.serialization.encoding.Encoder;
import kotlinx.serialization.internal.SerializationConstructorMarker;
import nf.e;
import org.jetbrains.annotations.NotNull;

@d
@Metadata(d1 = {"\u0000:\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\bÇ\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0003\u0010\u0004J\u001d\u0010\t\u001a\u00020\b2\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\u0007\u001a\u00020\u0002¢\u0006\u0004\b\t\u0010\nJ\u0015\u0010\r\u001a\u00020\u00022\u0006\u0010\f\u001a\u00020\u000b¢\u0006\u0004\b\r\u0010\u000eJ\u0017\u0010\u0011\u001a\f\u0012\b\u0012\u0006\u0012\u0002\b\u00030\u00100\u000f¢\u0006\u0004\b\u0011\u0010\u0012R\u0017\u0010\u0014\u001a\u00020\u00138\u0006¢\u0006\f\n\u0004\b\u0014\u0010\u0015\u001a\u0004\b\u0016\u0010\u0017¨\u0006\u0018"}, d2 = {"com/discord/chat/bridge/botuikit/SectionComponent.$serializer", "Lbs/h0;", "Lcom/discord/chat/bridge/botuikit/SectionComponent;", "<init>", "()V", "Lkotlinx/serialization/encoding/Encoder;", "encoder", "value", "", "serialize", "(Lkotlinx/serialization/encoding/Encoder;Lcom/discord/chat/bridge/botuikit/SectionComponent;)V", "Lkotlinx/serialization/encoding/Decoder;", "decoder", "deserialize", "(Lkotlinx/serialization/encoding/Decoder;)Lcom/discord/chat/bridge/botuikit/SectionComponent;", "", "Lkotlinx/serialization/KSerializer;", "childSerializers", "()[Lkotlinx/serialization/KSerializer;", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "descriptor", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "getDescriptor", "()Lkotlinx/serialization/descriptors/SerialDescriptor;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class SectionComponent$$serializer implements h0 {

    @NotNull
    public static final SectionComponent$$serializer INSTANCE;

    @NotNull
    private static final SerialDescriptor descriptor;

    static {
        SectionComponent$$serializer sectionComponent$$serializer = new SectionComponent$$serializer();
        INSTANCE = sectionComponent$$serializer;
        j1 j1Var = new j1("9", sectionComponent$$serializer, 5);
        j1Var.k("type", false);
        j1Var.k(StackTraceHelper.ID_KEY, false);
        j1Var.k("errorText", true);
        j1Var.k("components", false);
        j1Var.k("accessory", false);
        descriptor = j1Var;
    }

    private SectionComponent$$serializer() {
    }

    /* JADX WARN: Multi-variable type inference failed */
    @Override // bs.h0
    @NotNull
    public final KSerializer[] childSerializers() {
        Lazy[] lazyArr;
        lazyArr = SectionComponent.$childSerializers;
        v1 v1Var = v1.a;
        return new KSerializer[]{o0.a, v1Var, e.o(v1Var), lazyArr[3].getValue(), SectionAccessory.Serializer.INSTANCE};
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final SectionComponent deserialize(@NotNull Decoder decoder) {
        Lazy[] lazyArr;
        int i5;
        int i6;
        String str;
        String str2;
        List list;
        SectionAccessory sectionAccessory;
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeDecoder beginStructure = decoder.beginStructure(serialDescriptor);
        lazyArr = SectionComponent.$childSerializers;
        if (beginStructure.decodeSequentially()) {
            i5 = beginStructure.decodeIntElement(serialDescriptor, 0);
            String decodeStringElement = beginStructure.decodeStringElement(serialDescriptor, 1);
            String str3 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 2, v1.a, null);
            list = (List) beginStructure.decodeSerializableElement(serialDescriptor, 3, (DeserializationStrategy) lazyArr[3].getValue(), null);
            sectionAccessory = (SectionAccessory) beginStructure.decodeSerializableElement(serialDescriptor, 4, SectionAccessory.Serializer.INSTANCE, null);
            str2 = str3;
            i6 = 31;
            str = decodeStringElement;
        } else {
            boolean z5 = true;
            i5 = 0;
            String str4 = null;
            String str5 = null;
            List list2 = null;
            SectionAccessory sectionAccessory2 = null;
            int i10 = 0;
            while (z5) {
                int decodeElementIndex = beginStructure.decodeElementIndex(serialDescriptor);
                if (decodeElementIndex == -1) {
                    z5 = false;
                } else if (decodeElementIndex == 0) {
                    i5 = beginStructure.decodeIntElement(serialDescriptor, 0);
                    i10 |= 1;
                } else if (decodeElementIndex == 1) {
                    str4 = beginStructure.decodeStringElement(serialDescriptor, 1);
                    i10 |= 2;
                } else if (decodeElementIndex == 2) {
                    str5 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 2, v1.a, str5);
                    i10 |= 4;
                } else if (decodeElementIndex == 3) {
                    list2 = (List) beginStructure.decodeSerializableElement(serialDescriptor, 3, (DeserializationStrategy) lazyArr[3].getValue(), list2);
                    i10 |= 8;
                } else {
                    if (decodeElementIndex != 4) {
                        throw new r(decodeElementIndex);
                    }
                    sectionAccessory2 = (SectionAccessory) beginStructure.decodeSerializableElement(serialDescriptor, 4, SectionAccessory.Serializer.INSTANCE, sectionAccessory2);
                    i10 |= 16;
                }
            }
            i6 = i10;
            str = str4;
            str2 = str5;
            list = list2;
            sectionAccessory = sectionAccessory2;
        }
        int i11 = i5;
        beginStructure.endStructure(serialDescriptor);
        return new SectionComponent(i6, i11, str, str2, list, sectionAccessory, (SerializationConstructorMarker) null);
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final SerialDescriptor getDescriptor() {
        return descriptor;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(@NotNull Encoder encoder, @NotNull SectionComponent value) {
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(value, "value");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeEncoder beginStructure = encoder.beginStructure(serialDescriptor);
        SectionComponent.write$Self$chat_release(value, beginStructure, serialDescriptor);
        beginStructure.endStructure(serialDescriptor);
    }

    @Override // bs.h0
    @NotNull
    public KSerializer[] typeParametersSerializers() {
        return h1.f3190b;
    }
}
