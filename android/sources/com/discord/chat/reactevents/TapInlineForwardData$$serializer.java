package com.discord.chat.reactevents;

import bs.g;
import bs.h0;
import bs.h1;
import bs.j1;
import bs.o0;
import bs.v1;
import ds.r;
import fo.d;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.serialization.KSerializer;
import kotlinx.serialization.descriptors.SerialDescriptor;
import kotlinx.serialization.encoding.CompositeDecoder;
import kotlinx.serialization.encoding.CompositeEncoder;
import kotlinx.serialization.encoding.Decoder;
import kotlinx.serialization.encoding.Encoder;
import nf.e;
import org.jetbrains.annotations.NotNull;

@d
@Metadata(d1 = {"\u0000:\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\bÇ\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0003\u0010\u0004J\u001d\u0010\t\u001a\u00020\b2\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\u0007\u001a\u00020\u0002¢\u0006\u0004\b\t\u0010\nJ\u0015\u0010\r\u001a\u00020\u00022\u0006\u0010\f\u001a\u00020\u000b¢\u0006\u0004\b\r\u0010\u000eJ\u0017\u0010\u0011\u001a\f\u0012\b\u0012\u0006\u0012\u0002\b\u00030\u00100\u000f¢\u0006\u0004\b\u0011\u0010\u0012R\u0017\u0010\u0014\u001a\u00020\u00138\u0006¢\u0006\f\n\u0004\b\u0014\u0010\u0015\u001a\u0004\b\u0016\u0010\u0017¨\u0006\u0018"}, d2 = {"com/discord/chat/reactevents/TapInlineForwardData.$serializer", "Lbs/h0;", "Lcom/discord/chat/reactevents/TapInlineForwardData;", "<init>", "()V", "Lkotlinx/serialization/encoding/Encoder;", "encoder", "value", "", "serialize", "(Lkotlinx/serialization/encoding/Encoder;Lcom/discord/chat/reactevents/TapInlineForwardData;)V", "Lkotlinx/serialization/encoding/Decoder;", "decoder", "deserialize", "(Lkotlinx/serialization/encoding/Decoder;)Lcom/discord/chat/reactevents/TapInlineForwardData;", "", "Lkotlinx/serialization/KSerializer;", "childSerializers", "()[Lkotlinx/serialization/KSerializer;", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "descriptor", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "getDescriptor", "()Lkotlinx/serialization/descriptors/SerialDescriptor;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class TapInlineForwardData$$serializer implements h0 {

    @NotNull
    public static final TapInlineForwardData$$serializer INSTANCE;

    @NotNull
    private static final SerialDescriptor descriptor;

    static {
        TapInlineForwardData$$serializer tapInlineForwardData$$serializer = new TapInlineForwardData$$serializer();
        INSTANCE = tapInlineForwardData$$serializer;
        j1 j1Var = new j1("com.discord.chat.reactevents.TapInlineForwardData", tapInlineForwardData$$serializer, 6);
        j1Var.k("channelId", false);
        j1Var.k("messageId", false);
        j1Var.k("targetKind", false);
        j1Var.k("embedIndex", false);
        j1Var.k("triggerHaptic", false);
        j1Var.k("location", false);
        descriptor = j1Var;
    }

    private TapInlineForwardData$$serializer() {
    }

    @Override // bs.h0
    @NotNull
    public final KSerializer[] childSerializers() {
        v1 v1Var = v1.a;
        return new KSerializer[]{v1Var, v1Var, v1Var, e.o(o0.a), e.o(g.a), e.o(v1Var)};
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final TapInlineForwardData deserialize(@NotNull Decoder decoder) {
        int i5;
        String str;
        String str2;
        String str3;
        Integer num;
        Boolean bool;
        String str4;
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeDecoder beginStructure = decoder.beginStructure(serialDescriptor);
        String str5 = null;
        if (beginStructure.decodeSequentially()) {
            String decodeStringElement = beginStructure.decodeStringElement(serialDescriptor, 0);
            String decodeStringElement2 = beginStructure.decodeStringElement(serialDescriptor, 1);
            String decodeStringElement3 = beginStructure.decodeStringElement(serialDescriptor, 2);
            Integer num2 = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 3, o0.a, null);
            Boolean bool2 = (Boolean) beginStructure.decodeNullableSerializableElement(serialDescriptor, 4, g.a, null);
            str = decodeStringElement;
            str4 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 5, v1.a, null);
            num = num2;
            bool = bool2;
            str3 = decodeStringElement3;
            str2 = decodeStringElement2;
            i5 = 63;
        } else {
            boolean z5 = true;
            int i6 = 0;
            String str6 = null;
            String str7 = null;
            Integer num3 = null;
            Boolean bool3 = null;
            String str8 = null;
            while (z5) {
                int decodeElementIndex = beginStructure.decodeElementIndex(serialDescriptor);
                switch (decodeElementIndex) {
                    case -1:
                        z5 = false;
                        continue;
                    case 0:
                        str5 = beginStructure.decodeStringElement(serialDescriptor, 0);
                        i6 |= 1;
                        continue;
                    case 1:
                        str6 = beginStructure.decodeStringElement(serialDescriptor, 1);
                        i6 |= 2;
                        break;
                    case 2:
                        str7 = beginStructure.decodeStringElement(serialDescriptor, 2);
                        i6 |= 4;
                        break;
                    case 3:
                        num3 = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 3, o0.a, num3);
                        i6 |= 8;
                        break;
                    case 4:
                        bool3 = (Boolean) beginStructure.decodeNullableSerializableElement(serialDescriptor, 4, g.a, bool3);
                        i6 |= 16;
                        break;
                    case 5:
                        str8 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 5, v1.a, str8);
                        i6 |= 32;
                        break;
                    default:
                        throw new r(decodeElementIndex);
                }
            }
            i5 = i6;
            str = str5;
            str2 = str6;
            str3 = str7;
            num = num3;
            bool = bool3;
            str4 = str8;
        }
        beginStructure.endStructure(serialDescriptor);
        return new TapInlineForwardData(i5, str, str2, str3, num, bool, str4, null);
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final SerialDescriptor getDescriptor() {
        return descriptor;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(@NotNull Encoder encoder, @NotNull TapInlineForwardData value) {
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(value, "value");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeEncoder beginStructure = encoder.beginStructure(serialDescriptor);
        TapInlineForwardData.write$Self$chat_release(value, beginStructure, serialDescriptor);
        beginStructure.endStructure(serialDescriptor);
    }

    @Override // bs.h0
    @NotNull
    public KSerializer[] typeParametersSerializers() {
        return h1.f3190b;
    }
}
