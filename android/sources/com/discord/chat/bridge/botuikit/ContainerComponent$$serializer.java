package com.discord.chat.bridge.botuikit;

import bs.c1;
import bs.g;
import bs.h0;
import bs.h1;
import bs.j1;
import bs.o0;
import bs.v1;
import com.facebook.react.devsupport.StackTraceHelper;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
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
import nf.e;
import org.jetbrains.annotations.NotNull;

@d
@Metadata(d1 = {"\u0000:\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\bÇ\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0003\u0010\u0004J\u001d\u0010\t\u001a\u00020\b2\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\u0007\u001a\u00020\u0002¢\u0006\u0004\b\t\u0010\nJ\u0015\u0010\r\u001a\u00020\u00022\u0006\u0010\f\u001a\u00020\u000b¢\u0006\u0004\b\r\u0010\u000eJ\u0017\u0010\u0011\u001a\f\u0012\b\u0012\u0006\u0012\u0002\b\u00030\u00100\u000f¢\u0006\u0004\b\u0011\u0010\u0012R\u0017\u0010\u0014\u001a\u00020\u00138\u0006¢\u0006\f\n\u0004\b\u0014\u0010\u0015\u001a\u0004\b\u0016\u0010\u0017¨\u0006\u0018"}, d2 = {"com/discord/chat/bridge/botuikit/ContainerComponent.$serializer", "Lbs/h0;", "Lcom/discord/chat/bridge/botuikit/ContainerComponent;", "<init>", "()V", "Lkotlinx/serialization/encoding/Encoder;", "encoder", "value", "", "serialize", "(Lkotlinx/serialization/encoding/Encoder;Lcom/discord/chat/bridge/botuikit/ContainerComponent;)V", "Lkotlinx/serialization/encoding/Decoder;", "decoder", "deserialize", "(Lkotlinx/serialization/encoding/Decoder;)Lcom/discord/chat/bridge/botuikit/ContainerComponent;", "", "Lkotlinx/serialization/KSerializer;", "childSerializers", "()[Lkotlinx/serialization/KSerializer;", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "descriptor", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "getDescriptor", "()Lkotlinx/serialization/descriptors/SerialDescriptor;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class ContainerComponent$$serializer implements h0 {

    @NotNull
    public static final ContainerComponent$$serializer INSTANCE;

    @NotNull
    private static final SerialDescriptor descriptor;

    static {
        ContainerComponent$$serializer containerComponent$$serializer = new ContainerComponent$$serializer();
        INSTANCE = containerComponent$$serializer;
        j1 j1Var = new j1("17", containerComponent$$serializer, 10);
        j1Var.k("type", false);
        j1Var.k(StackTraceHelper.ID_KEY, false);
        j1Var.k("errorText", true);
        j1Var.k("components", false);
        j1Var.k("accentColor", true);
        j1Var.k("isSpoiler", false);
        j1Var.k("spoilerDescription", false);
        j1Var.k("themedBackgroundColor", true);
        j1Var.k("spoilerOrNull", true);
        j1Var.k("obscureOrNull", true);
        descriptor = j1Var;
    }

    private ContainerComponent$$serializer() {
    }

    /* JADX WARN: Multi-variable type inference failed */
    @Override // bs.h0
    @NotNull
    public final KSerializer[] childSerializers() {
        Lazy[] lazyArr;
        lazyArr = ContainerComponent.$childSerializers;
        o0 o0Var = o0.a;
        v1 v1Var = v1.a;
        return new KSerializer[]{o0Var, v1Var, e.o(v1Var), lazyArr[3].getValue(), e.o(o0Var), g.a, e.o(v1Var), e.o(o0Var), e.o(v1Var), e.o(c1.a)};
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final ContainerComponent deserialize(@NotNull Decoder decoder) {
        Lazy[] lazyArr;
        int i5;
        Void r31;
        String str;
        Integer num;
        Integer num2;
        String str2;
        List list;
        String str3;
        boolean z5;
        int i6;
        String str4;
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeDecoder beginStructure = decoder.beginStructure(serialDescriptor);
        lazyArr = ContainerComponent.$childSerializers;
        int i10 = 9;
        if (beginStructure.decodeSequentially()) {
            i5 = beginStructure.decodeIntElement(serialDescriptor, 0);
            String decodeStringElement = beginStructure.decodeStringElement(serialDescriptor, 1);
            v1 v1Var = v1.a;
            String str5 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 2, v1Var, null);
            List list2 = (List) beginStructure.decodeSerializableElement(serialDescriptor, 3, (DeserializationStrategy) lazyArr[3].getValue(), null);
            o0 o0Var = o0.a;
            Integer num3 = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 4, o0Var, null);
            boolean decodeBooleanElement = beginStructure.decodeBooleanElement(serialDescriptor, 5);
            String str6 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 6, v1Var, null);
            Integer num4 = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 7, o0Var, null);
            String str7 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 8, v1Var, null);
            list = list2;
            r31 = (Void) beginStructure.decodeNullableSerializableElement(serialDescriptor, 9, c1.a, null);
            num = num4;
            str2 = str6;
            z5 = decodeBooleanElement;
            str = str7;
            num2 = num3;
            str3 = str5;
            i6 = 1023;
            str4 = decodeStringElement;
        } else {
            int i11 = 3;
            boolean z6 = true;
            i5 = 0;
            int i12 = 0;
            Void r62 = null;
            String str8 = null;
            Integer num5 = null;
            Integer num6 = null;
            String str9 = null;
            List list3 = null;
            String str10 = null;
            boolean z7 = false;
            String str11 = null;
            while (z6) {
                int decodeElementIndex = beginStructure.decodeElementIndex(serialDescriptor);
                switch (decodeElementIndex) {
                    case -1:
                        z6 = false;
                        i10 = 9;
                        i11 = 3;
                    case 0:
                        i12 |= 1;
                        i5 = beginStructure.decodeIntElement(serialDescriptor, 0);
                        i10 = 9;
                        i11 = 3;
                    case 1:
                        str10 = beginStructure.decodeStringElement(serialDescriptor, 1);
                        i12 |= 2;
                        i10 = 9;
                        i11 = 3;
                    case 2:
                        str11 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 2, v1.a, str11);
                        i12 |= 4;
                        i10 = 9;
                        i11 = 3;
                    case 3:
                        list3 = (List) beginStructure.decodeSerializableElement(serialDescriptor, i11, (DeserializationStrategy) lazyArr[i11].getValue(), list3);
                        i12 |= 8;
                        i10 = 9;
                    case 4:
                        num6 = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 4, o0.a, num6);
                        i12 |= 16;
                        i10 = 9;
                    case 5:
                        z7 = beginStructure.decodeBooleanElement(serialDescriptor, 5);
                        i12 |= 32;
                        i10 = 9;
                    case 6:
                        str9 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 6, v1.a, str9);
                        i12 |= 64;
                        i10 = 9;
                    case 7:
                        num5 = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 7, o0.a, num5);
                        i12 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                        i10 = 9;
                    case 8:
                        str8 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 8, v1.a, str8);
                        i12 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER;
                    case 9:
                        r62 = (Void) beginStructure.decodeNullableSerializableElement(serialDescriptor, i10, c1.a, r62);
                        i12 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING;
                    default:
                        throw new r(decodeElementIndex);
                }
            }
            r31 = r62;
            str = str8;
            num = num5;
            num2 = num6;
            str2 = str9;
            list = list3;
            str3 = str11;
            z5 = z7;
            i6 = i12;
            str4 = str10;
        }
        int i13 = i5;
        beginStructure.endStructure(serialDescriptor);
        return new ContainerComponent(i6, i13, str4, str3, list, num2, z5, str2, num, str, r31, null);
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final SerialDescriptor getDescriptor() {
        return descriptor;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(@NotNull Encoder encoder, @NotNull ContainerComponent value) {
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(value, "value");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeEncoder beginStructure = encoder.beginStructure(serialDescriptor);
        ContainerComponent.write$Self$chat_release(value, beginStructure, serialDescriptor);
        beginStructure.endStructure(serialDescriptor);
    }

    @Override // bs.h0
    @NotNull
    public KSerializer[] typeParametersSerializers() {
        return h1.f3190b;
    }
}
