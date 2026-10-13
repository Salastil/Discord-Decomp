package com.discord.chat.reactevents;

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
@Metadata(d1 = {"\u0000:\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\bÇ\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0003\u0010\u0004J\u001d\u0010\t\u001a\u00020\b2\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\u0007\u001a\u00020\u0002¢\u0006\u0004\b\t\u0010\nJ\u0015\u0010\r\u001a\u00020\u00022\u0006\u0010\f\u001a\u00020\u000b¢\u0006\u0004\b\r\u0010\u000eJ\u0017\u0010\u0011\u001a\f\u0012\b\u0012\u0006\u0012\u0002\b\u00030\u00100\u000f¢\u0006\u0004\b\u0011\u0010\u0012R\u0017\u0010\u0014\u001a\u00020\u00138\u0006¢\u0006\f\n\u0004\b\u0014\u0010\u0015\u001a\u0004\b\u0016\u0010\u0017¨\u0006\u0018"}, d2 = {"com/discord/chat/reactevents/LongPressMessageEvent.$serializer", "Lbs/h0;", "Lcom/discord/chat/reactevents/LongPressMessageEvent;", "<init>", "()V", "Lkotlinx/serialization/encoding/Encoder;", "encoder", "value", "", "serialize", "(Lkotlinx/serialization/encoding/Encoder;Lcom/discord/chat/reactevents/LongPressMessageEvent;)V", "Lkotlinx/serialization/encoding/Decoder;", "decoder", "deserialize", "(Lkotlinx/serialization/encoding/Decoder;)Lcom/discord/chat/reactevents/LongPressMessageEvent;", "", "Lkotlinx/serialization/KSerializer;", "childSerializers", "()[Lkotlinx/serialization/KSerializer;", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "descriptor", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "getDescriptor", "()Lkotlinx/serialization/descriptors/SerialDescriptor;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class LongPressMessageEvent$$serializer implements h0 {

    @NotNull
    public static final LongPressMessageEvent$$serializer INSTANCE;

    @NotNull
    private static final SerialDescriptor descriptor;

    static {
        LongPressMessageEvent$$serializer longPressMessageEvent$$serializer = new LongPressMessageEvent$$serializer();
        INSTANCE = longPressMessageEvent$$serializer;
        j1 j1Var = new j1("com.discord.chat.reactevents.LongPressMessageEvent", longPressMessageEvent$$serializer, 6);
        j1Var.k("messageId", false);
        j1Var.k("channelId", false);
        j1Var.k("mediaIndex", false);
        j1Var.k("mediaType", false);
        j1Var.k("componentId", false);
        j1Var.k("componentMediaIndex", false);
        descriptor = j1Var;
    }

    private LongPressMessageEvent$$serializer() {
    }

    @Override // bs.h0
    @NotNull
    public final KSerializer[] childSerializers() {
        v1 v1Var = v1.a;
        o0 o0Var = o0.a;
        return new KSerializer[]{v1Var, v1Var, o0Var, v1Var, e.o(v1Var), e.o(o0Var)};
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final LongPressMessageEvent deserialize(@NotNull Decoder decoder) {
        int i5;
        int i6;
        String str;
        String str2;
        String str3;
        String str4;
        Integer num;
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeDecoder beginStructure = decoder.beginStructure(serialDescriptor);
        if (beginStructure.decodeSequentially()) {
            String decodeStringElement = beginStructure.decodeStringElement(serialDescriptor, 0);
            String decodeStringElement2 = beginStructure.decodeStringElement(serialDescriptor, 1);
            int decodeIntElement = beginStructure.decodeIntElement(serialDescriptor, 2);
            String decodeStringElement3 = beginStructure.decodeStringElement(serialDescriptor, 3);
            String str5 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 4, v1.a, null);
            str = decodeStringElement;
            num = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 5, o0.a, null);
            str3 = decodeStringElement3;
            str4 = str5;
            i5 = decodeIntElement;
            str2 = decodeStringElement2;
            i6 = 63;
        } else {
            boolean z5 = true;
            int i10 = 0;
            String str6 = null;
            String str7 = null;
            String str8 = null;
            String str9 = null;
            Integer num2 = null;
            int i11 = 0;
            while (z5) {
                int decodeElementIndex = beginStructure.decodeElementIndex(serialDescriptor);
                switch (decodeElementIndex) {
                    case -1:
                        z5 = false;
                        continue;
                    case 0:
                        str6 = beginStructure.decodeStringElement(serialDescriptor, 0);
                        i11 |= 1;
                        continue;
                    case 1:
                        str7 = beginStructure.decodeStringElement(serialDescriptor, 1);
                        i11 |= 2;
                        break;
                    case 2:
                        i10 = beginStructure.decodeIntElement(serialDescriptor, 2);
                        i11 |= 4;
                        break;
                    case 3:
                        str8 = beginStructure.decodeStringElement(serialDescriptor, 3);
                        i11 |= 8;
                        break;
                    case 4:
                        str9 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 4, v1.a, str9);
                        i11 |= 16;
                        break;
                    case 5:
                        num2 = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 5, o0.a, num2);
                        i11 |= 32;
                        break;
                    default:
                        throw new r(decodeElementIndex);
                }
            }
            i5 = i10;
            i6 = i11;
            str = str6;
            str2 = str7;
            str3 = str8;
            str4 = str9;
            num = num2;
        }
        beginStructure.endStructure(serialDescriptor);
        return new LongPressMessageEvent(i6, str, str2, i5, str3, str4, num, null);
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final SerialDescriptor getDescriptor() {
        return descriptor;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(@NotNull Encoder encoder, @NotNull LongPressMessageEvent value) {
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(value, "value");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeEncoder beginStructure = encoder.beginStructure(serialDescriptor);
        LongPressMessageEvent.write$Self$chat_release(value, beginStructure, serialDescriptor);
        beginStructure.endStructure(serialDescriptor);
    }

    @Override // bs.h0
    @NotNull
    public KSerializer[] typeParametersSerializers() {
        return h1.f3190b;
    }
}
