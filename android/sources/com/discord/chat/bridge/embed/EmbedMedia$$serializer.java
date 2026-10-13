package com.discord.chat.bridge.embed;

import bs.g;
import bs.h0;
import bs.h1;
import bs.j1;
import bs.o0;
import bs.v1;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
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
@Metadata(d1 = {"\u0000:\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\bÇ\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0003\u0010\u0004J\u001d\u0010\t\u001a\u00020\b2\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\u0007\u001a\u00020\u0002¢\u0006\u0004\b\t\u0010\nJ\u0015\u0010\r\u001a\u00020\u00022\u0006\u0010\f\u001a\u00020\u000b¢\u0006\u0004\b\r\u0010\u000eJ\u0017\u0010\u0011\u001a\f\u0012\b\u0012\u0006\u0012\u0002\b\u00030\u00100\u000f¢\u0006\u0004\b\u0011\u0010\u0012R\u0017\u0010\u0014\u001a\u00020\u00138\u0006¢\u0006\f\n\u0004\b\u0014\u0010\u0015\u001a\u0004\b\u0016\u0010\u0017¨\u0006\u0018"}, d2 = {"com/discord/chat/bridge/embed/EmbedMedia.$serializer", "Lbs/h0;", "Lcom/discord/chat/bridge/embed/EmbedMedia;", "<init>", "()V", "Lkotlinx/serialization/encoding/Encoder;", "encoder", "value", "", "serialize", "(Lkotlinx/serialization/encoding/Encoder;Lcom/discord/chat/bridge/embed/EmbedMedia;)V", "Lkotlinx/serialization/encoding/Decoder;", "decoder", "deserialize", "(Lkotlinx/serialization/encoding/Decoder;)Lcom/discord/chat/bridge/embed/EmbedMedia;", "", "Lkotlinx/serialization/KSerializer;", "childSerializers", "()[Lkotlinx/serialization/KSerializer;", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "descriptor", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "getDescriptor", "()Lkotlinx/serialization/descriptors/SerialDescriptor;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class EmbedMedia$$serializer implements h0 {

    @NotNull
    public static final EmbedMedia$$serializer INSTANCE;

    @NotNull
    private static final SerialDescriptor descriptor;

    static {
        EmbedMedia$$serializer embedMedia$$serializer = new EmbedMedia$$serializer();
        INSTANCE = embedMedia$$serializer;
        j1 j1Var = new j1("com.discord.chat.bridge.embed.EmbedMedia", embedMedia$$serializer, 9);
        j1Var.k("url", false);
        j1Var.k("proxyURL", true);
        j1Var.k("width", false);
        j1Var.k("height", false);
        j1Var.k("placeholder", true);
        j1Var.k("placeholderVersion", true);
        j1Var.k("srcIsAnimated", false);
        j1Var.k("contentType", true);
        j1Var.k("embedUrl", true);
        descriptor = j1Var;
    }

    private EmbedMedia$$serializer() {
    }

    @Override // bs.h0
    @NotNull
    public final KSerializer[] childSerializers() {
        v1 v1Var = v1.a;
        KSerializer o6 = e.o(v1Var);
        o0 o0Var = o0.a;
        return new KSerializer[]{v1Var, o6, o0Var, o0Var, e.o(v1Var), e.o(o0Var), g.a, e.o(v1Var), v1Var};
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final EmbedMedia deserialize(@NotNull Decoder decoder) {
        boolean z5;
        String str;
        Integer num;
        String str2;
        String str3;
        int i5;
        int i6;
        int i10;
        String str4;
        String str5;
        char c6;
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeDecoder beginStructure = decoder.beginStructure(serialDescriptor);
        int i11 = 7;
        int i12 = 6;
        if (beginStructure.decodeSequentially()) {
            String decodeStringElement = beginStructure.decodeStringElement(serialDescriptor, 0);
            v1 v1Var = v1.a;
            String str6 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 1, v1Var, null);
            int decodeIntElement = beginStructure.decodeIntElement(serialDescriptor, 2);
            int decodeIntElement2 = beginStructure.decodeIntElement(serialDescriptor, 3);
            String str7 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 4, v1Var, null);
            Integer num2 = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 5, o0.a, null);
            boolean decodeBooleanElement = beginStructure.decodeBooleanElement(serialDescriptor, 6);
            str4 = decodeStringElement;
            str = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 7, v1Var, null);
            z5 = decodeBooleanElement;
            num = num2;
            i5 = decodeIntElement2;
            str5 = beginStructure.decodeStringElement(serialDescriptor, 8);
            str2 = str7;
            i6 = decodeIntElement;
            str3 = str6;
            i10 = 511;
        } else {
            boolean z6 = true;
            boolean z7 = false;
            int i13 = 0;
            int i14 = 0;
            String str8 = null;
            Integer num3 = null;
            String str9 = null;
            String str10 = null;
            String str11 = null;
            int i15 = 0;
            String str12 = null;
            while (z6) {
                int decodeElementIndex = beginStructure.decodeElementIndex(serialDescriptor);
                switch (decodeElementIndex) {
                    case -1:
                        z6 = false;
                        i11 = 7;
                    case 0:
                        str10 = beginStructure.decodeStringElement(serialDescriptor, 0);
                        i14 |= 1;
                        i11 = 7;
                        i12 = 6;
                    case 1:
                        str12 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 1, v1.a, str12);
                        i14 |= 2;
                        i11 = 7;
                        i12 = 6;
                    case 2:
                        i14 |= 4;
                        i13 = beginStructure.decodeIntElement(serialDescriptor, 2);
                        i11 = 7;
                    case 3:
                        c6 = 4;
                        i15 = beginStructure.decodeIntElement(serialDescriptor, 3);
                        i14 |= 8;
                        i11 = 7;
                    case 4:
                        c6 = 4;
                        str9 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 4, v1.a, str9);
                        i14 |= 16;
                        i11 = 7;
                    case 5:
                        num3 = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 5, o0.a, num3);
                        i14 |= 32;
                    case 6:
                        z7 = beginStructure.decodeBooleanElement(serialDescriptor, i12);
                        i14 |= 64;
                    case 7:
                        str8 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, i11, v1.a, str8);
                        i14 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                    case 8:
                        str11 = beginStructure.decodeStringElement(serialDescriptor, 8);
                        i14 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER;
                    default:
                        throw new r(decodeElementIndex);
                }
            }
            z5 = z7;
            str = str8;
            num = num3;
            str2 = str9;
            str3 = str12;
            i5 = i15;
            i6 = i13;
            i10 = i14;
            str4 = str10;
            str5 = str11;
        }
        beginStructure.endStructure(serialDescriptor);
        return new EmbedMedia(i10, str4, str3, i6, i5, str2, num, z5, str, str5, null);
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final SerialDescriptor getDescriptor() {
        return descriptor;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(@NotNull Encoder encoder, @NotNull EmbedMedia value) {
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(value, "value");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeEncoder beginStructure = encoder.beginStructure(serialDescriptor);
        EmbedMedia.write$Self$chat_release(value, beginStructure, serialDescriptor);
        beginStructure.endStructure(serialDescriptor);
    }

    @Override // bs.h0
    @NotNull
    public KSerializer[] typeParametersSerializers() {
        return h1.f3190b;
    }
}
