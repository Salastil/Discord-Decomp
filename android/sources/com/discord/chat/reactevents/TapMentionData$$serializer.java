package com.discord.chat.reactevents;

import bs.h0;
import bs.h1;
import bs.j1;
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
import kotlinx.serialization.internal.SerializationConstructorMarker;
import nf.e;
import org.jetbrains.annotations.NotNull;

@d
@Metadata(d1 = {"\u0000:\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\bÇ\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0003\u0010\u0004J\u001d\u0010\t\u001a\u00020\b2\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\u0007\u001a\u00020\u0002¢\u0006\u0004\b\t\u0010\nJ\u0015\u0010\r\u001a\u00020\u00022\u0006\u0010\f\u001a\u00020\u000b¢\u0006\u0004\b\r\u0010\u000eJ\u0017\u0010\u0011\u001a\f\u0012\b\u0012\u0006\u0012\u0002\b\u00030\u00100\u000f¢\u0006\u0004\b\u0011\u0010\u0012R\u0017\u0010\u0014\u001a\u00020\u00138\u0006¢\u0006\f\n\u0004\b\u0014\u0010\u0015\u001a\u0004\b\u0016\u0010\u0017¨\u0006\u0018"}, d2 = {"com/discord/chat/reactevents/TapMentionData.$serializer", "Lbs/h0;", "Lcom/discord/chat/reactevents/TapMentionData;", "<init>", "()V", "Lkotlinx/serialization/encoding/Encoder;", "encoder", "value", "", "serialize", "(Lkotlinx/serialization/encoding/Encoder;Lcom/discord/chat/reactevents/TapMentionData;)V", "Lkotlinx/serialization/encoding/Decoder;", "decoder", "deserialize", "(Lkotlinx/serialization/encoding/Decoder;)Lcom/discord/chat/reactevents/TapMentionData;", "", "Lkotlinx/serialization/KSerializer;", "childSerializers", "()[Lkotlinx/serialization/KSerializer;", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "descriptor", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "getDescriptor", "()Lkotlinx/serialization/descriptors/SerialDescriptor;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class TapMentionData$$serializer implements h0 {

    @NotNull
    public static final TapMentionData$$serializer INSTANCE;

    @NotNull
    private static final SerialDescriptor descriptor;

    static {
        TapMentionData$$serializer tapMentionData$$serializer = new TapMentionData$$serializer();
        INSTANCE = tapMentionData$$serializer;
        j1 j1Var = new j1("com.discord.chat.reactevents.TapMentionData", tapMentionData$$serializer, 6);
        j1Var.k("userId", false);
        j1Var.k("channelId", false);
        j1Var.k("roleName", false);
        j1Var.k("parsedUserId", false);
        j1Var.k("roleId", true);
        j1Var.k("guildId", true);
        descriptor = j1Var;
    }

    private TapMentionData$$serializer() {
    }

    @Override // bs.h0
    @NotNull
    public final KSerializer[] childSerializers() {
        v1 v1Var = v1.a;
        return new KSerializer[]{e.o(v1Var), v1Var, e.o(v1Var), e.o(v1Var), e.o(v1Var), e.o(v1Var)};
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final TapMentionData deserialize(@NotNull Decoder decoder) {
        int i5;
        String str;
        String str2;
        String str3;
        String str4;
        String str5;
        String str6;
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeDecoder beginStructure = decoder.beginStructure(serialDescriptor);
        int i6 = 5;
        String str7 = null;
        if (beginStructure.decodeSequentially()) {
            v1 v1Var = v1.a;
            String str8 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 0, v1Var, null);
            String decodeStringElement = beginStructure.decodeStringElement(serialDescriptor, 1);
            String str9 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 2, v1Var, null);
            String str10 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 3, v1Var, null);
            String str11 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 4, v1Var, null);
            str6 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 5, v1Var, null);
            i5 = 63;
            str4 = str10;
            str5 = str11;
            str3 = str9;
            str2 = decodeStringElement;
            str = str8;
        } else {
            boolean z5 = true;
            int i10 = 0;
            String str12 = null;
            String str13 = null;
            String str14 = null;
            String str15 = null;
            String str16 = null;
            while (z5) {
                int decodeElementIndex = beginStructure.decodeElementIndex(serialDescriptor);
                switch (decodeElementIndex) {
                    case -1:
                        z5 = false;
                        i6 = 5;
                    case 0:
                        str7 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 0, v1.a, str7);
                        i10 |= 1;
                        i6 = 5;
                    case 1:
                        str12 = beginStructure.decodeStringElement(serialDescriptor, 1);
                        i10 |= 2;
                    case 2:
                        str13 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 2, v1.a, str13);
                        i10 |= 4;
                    case 3:
                        str14 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 3, v1.a, str14);
                        i10 |= 8;
                    case 4:
                        str15 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 4, v1.a, str15);
                        i10 |= 16;
                    case 5:
                        str16 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, i6, v1.a, str16);
                        i10 |= 32;
                    default:
                        throw new r(decodeElementIndex);
                }
            }
            i5 = i10;
            str = str7;
            str2 = str12;
            str3 = str13;
            str4 = str14;
            str5 = str15;
            str6 = str16;
        }
        beginStructure.endStructure(serialDescriptor);
        return new TapMentionData(i5, str, str2, str3, str4, str5, str6, (SerializationConstructorMarker) null);
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final SerialDescriptor getDescriptor() {
        return descriptor;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(@NotNull Encoder encoder, @NotNull TapMentionData value) {
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(value, "value");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeEncoder beginStructure = encoder.beginStructure(serialDescriptor);
        TapMentionData.write$Self$chat_release(value, beginStructure, serialDescriptor);
        beginStructure.endStructure(serialDescriptor);
    }

    @Override // bs.h0
    @NotNull
    public KSerializer[] typeParametersSerializers() {
        return h1.f3190b;
    }
}
