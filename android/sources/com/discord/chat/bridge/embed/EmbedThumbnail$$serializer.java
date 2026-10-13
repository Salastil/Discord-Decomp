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
@Metadata(d1 = {"\u0000:\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\bÇ\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0003\u0010\u0004J\u001d\u0010\t\u001a\u00020\b2\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\u0007\u001a\u00020\u0002¢\u0006\u0004\b\t\u0010\nJ\u0015\u0010\r\u001a\u00020\u00022\u0006\u0010\f\u001a\u00020\u000b¢\u0006\u0004\b\r\u0010\u000eJ\u0017\u0010\u0011\u001a\f\u0012\b\u0012\u0006\u0012\u0002\b\u00030\u00100\u000f¢\u0006\u0004\b\u0011\u0010\u0012R\u0017\u0010\u0014\u001a\u00020\u00138\u0006¢\u0006\f\n\u0004\b\u0014\u0010\u0015\u001a\u0004\b\u0016\u0010\u0017¨\u0006\u0018"}, d2 = {"com/discord/chat/bridge/embed/EmbedThumbnail.$serializer", "Lbs/h0;", "Lcom/discord/chat/bridge/embed/EmbedThumbnail;", "<init>", "()V", "Lkotlinx/serialization/encoding/Encoder;", "encoder", "value", "", "serialize", "(Lkotlinx/serialization/encoding/Encoder;Lcom/discord/chat/bridge/embed/EmbedThumbnail;)V", "Lkotlinx/serialization/encoding/Decoder;", "decoder", "deserialize", "(Lkotlinx/serialization/encoding/Decoder;)Lcom/discord/chat/bridge/embed/EmbedThumbnail;", "", "Lkotlinx/serialization/KSerializer;", "childSerializers", "()[Lkotlinx/serialization/KSerializer;", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "descriptor", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "getDescriptor", "()Lkotlinx/serialization/descriptors/SerialDescriptor;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class EmbedThumbnail$$serializer implements h0 {

    @NotNull
    public static final EmbedThumbnail$$serializer INSTANCE;

    @NotNull
    private static final SerialDescriptor descriptor;

    static {
        EmbedThumbnail$$serializer embedThumbnail$$serializer = new EmbedThumbnail$$serializer();
        INSTANCE = embedThumbnail$$serializer;
        j1 j1Var = new j1("com.discord.chat.bridge.embed.EmbedThumbnail", embedThumbnail$$serializer, 11);
        j1Var.k("url", false);
        j1Var.k("proxyURL", true);
        j1Var.k("videoUrl", true);
        j1Var.k("height", false);
        j1Var.k("width", false);
        j1Var.k("gifv", true);
        j1Var.k("showPlayButton", true);
        j1Var.k("placeholder", true);
        j1Var.k("placeholderVersion", true);
        j1Var.k("srcIsAnimated", true);
        j1Var.k("embedUrl", true);
        descriptor = j1Var;
    }

    private EmbedThumbnail$$serializer() {
    }

    @Override // bs.h0
    @NotNull
    public final KSerializer[] childSerializers() {
        v1 v1Var = v1.a;
        KSerializer o6 = e.o(v1Var);
        KSerializer o7 = e.o(v1Var);
        o0 o0Var = o0.a;
        g gVar = g.a;
        return new KSerializer[]{v1Var, o6, o7, o0Var, o0Var, e.o(gVar), e.o(gVar), e.o(v1Var), e.o(o0Var), gVar, v1Var};
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final EmbedThumbnail deserialize(@NotNull Decoder decoder) {
        boolean z5;
        String str;
        Integer num;
        Boolean bool;
        String str2;
        Boolean bool2;
        String str3;
        int i5;
        int i6;
        String str4;
        String str5;
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeDecoder beginStructure = decoder.beginStructure(serialDescriptor);
        int i10 = 10;
        int i11 = 9;
        int i12 = 7;
        int i13 = 0;
        if (beginStructure.decodeSequentially()) {
            String decodeStringElement = beginStructure.decodeStringElement(serialDescriptor, 0);
            v1 v1Var = v1.a;
            String str6 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 1, v1Var, null);
            String str7 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 2, v1Var, null);
            int decodeIntElement = beginStructure.decodeIntElement(serialDescriptor, 3);
            int decodeIntElement2 = beginStructure.decodeIntElement(serialDescriptor, 4);
            g gVar = g.a;
            Boolean bool3 = (Boolean) beginStructure.decodeNullableSerializableElement(serialDescriptor, 5, gVar, null);
            Boolean bool4 = (Boolean) beginStructure.decodeNullableSerializableElement(serialDescriptor, 6, gVar, null);
            String str8 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 7, v1Var, null);
            Integer num2 = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 8, o0.a, null);
            boolean decodeBooleanElement = beginStructure.decodeBooleanElement(serialDescriptor, 9);
            i13 = 2047;
            str4 = decodeStringElement;
            str5 = beginStructure.decodeStringElement(serialDescriptor, 10);
            z5 = decodeBooleanElement;
            str2 = str8;
            bool = bool4;
            bool2 = bool3;
            i5 = decodeIntElement;
            num = num2;
            i6 = decodeIntElement2;
            str3 = str7;
            str = str6;
        } else {
            boolean z6 = true;
            boolean z7 = false;
            int i14 = 0;
            Integer num3 = null;
            Boolean bool5 = null;
            String str9 = null;
            Boolean bool6 = null;
            String str10 = null;
            String str11 = null;
            String str12 = null;
            String str13 = null;
            int i15 = 0;
            while (z6) {
                int decodeElementIndex = beginStructure.decodeElementIndex(serialDescriptor);
                switch (decodeElementIndex) {
                    case -1:
                        z6 = false;
                        i10 = 10;
                        i11 = 9;
                    case 0:
                        str11 = beginStructure.decodeStringElement(serialDescriptor, 0);
                        i13 |= 1;
                        i10 = 10;
                        i11 = 9;
                        i12 = 7;
                    case 1:
                        i13 |= 2;
                        str12 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 1, v1.a, str12);
                        i10 = 10;
                        i11 = 9;
                        i12 = 7;
                    case 2:
                        str10 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 2, v1.a, str10);
                        i13 |= 4;
                        i10 = 10;
                        i11 = 9;
                    case 3:
                        i13 |= 8;
                        i15 = beginStructure.decodeIntElement(serialDescriptor, 3);
                        i10 = 10;
                    case 4:
                        i14 = beginStructure.decodeIntElement(serialDescriptor, 4);
                        i13 |= 16;
                        i10 = 10;
                    case 5:
                        bool6 = (Boolean) beginStructure.decodeNullableSerializableElement(serialDescriptor, 5, g.a, bool6);
                        i13 |= 32;
                        i10 = 10;
                    case 6:
                        bool5 = (Boolean) beginStructure.decodeNullableSerializableElement(serialDescriptor, 6, g.a, bool5);
                        i13 |= 64;
                        i10 = 10;
                    case 7:
                        str9 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, i12, v1.a, str9);
                        i13 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                    case 8:
                        num3 = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 8, o0.a, num3);
                        i13 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER;
                    case 9:
                        z7 = beginStructure.decodeBooleanElement(serialDescriptor, i11);
                        i13 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING;
                    case 10:
                        str13 = beginStructure.decodeStringElement(serialDescriptor, i10);
                        i13 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET;
                    default:
                        throw new r(decodeElementIndex);
                }
            }
            z5 = z7;
            str = str12;
            num = num3;
            bool = bool5;
            str2 = str9;
            bool2 = bool6;
            str3 = str10;
            i5 = i15;
            i6 = i14;
            str4 = str11;
            str5 = str13;
        }
        int i16 = i13;
        beginStructure.endStructure(serialDescriptor);
        return new EmbedThumbnail(i16, str4, str, str3, i5, i6, bool2, bool, str2, num, z5, str5, null);
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final SerialDescriptor getDescriptor() {
        return descriptor;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(@NotNull Encoder encoder, @NotNull EmbedThumbnail value) {
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(value, "value");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeEncoder beginStructure = encoder.beginStructure(serialDescriptor);
        EmbedThumbnail.write$Self$chat_release(value, beginStructure, serialDescriptor);
        beginStructure.endStructure(serialDescriptor);
    }

    @Override // bs.h0
    @NotNull
    public KSerializer[] typeParametersSerializers() {
        return h1.f3190b;
    }
}
