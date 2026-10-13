package com.discord.chat.bridge.policynotice;

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
import org.jetbrains.annotations.NotNull;

@d
@Metadata(d1 = {"\u0000:\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\bÇ\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0003\u0010\u0004J\u001d\u0010\t\u001a\u00020\b2\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\u0007\u001a\u00020\u0002¢\u0006\u0004\b\t\u0010\nJ\u0015\u0010\r\u001a\u00020\u00022\u0006\u0010\f\u001a\u00020\u000b¢\u0006\u0004\b\r\u0010\u000eJ\u0017\u0010\u0011\u001a\f\u0012\b\u0012\u0006\u0012\u0002\b\u00030\u00100\u000f¢\u0006\u0004\b\u0011\u0010\u0012R\u0017\u0010\u0014\u001a\u00020\u00138\u0006¢\u0006\f\n\u0004\b\u0014\u0010\u0015\u001a\u0004\b\u0016\u0010\u0017¨\u0006\u0018"}, d2 = {"com/discord/chat/bridge/policynotice/SafetyPolicyNoticeEmbed.$serializer", "Lbs/h0;", "Lcom/discord/chat/bridge/policynotice/SafetyPolicyNoticeEmbed;", "<init>", "()V", "Lkotlinx/serialization/encoding/Encoder;", "encoder", "value", "", "serialize", "(Lkotlinx/serialization/encoding/Encoder;Lcom/discord/chat/bridge/policynotice/SafetyPolicyNoticeEmbed;)V", "Lkotlinx/serialization/encoding/Decoder;", "decoder", "deserialize", "(Lkotlinx/serialization/encoding/Decoder;)Lcom/discord/chat/bridge/policynotice/SafetyPolicyNoticeEmbed;", "", "Lkotlinx/serialization/KSerializer;", "childSerializers", "()[Lkotlinx/serialization/KSerializer;", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "descriptor", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "getDescriptor", "()Lkotlinx/serialization/descriptors/SerialDescriptor;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class SafetyPolicyNoticeEmbed$$serializer implements h0 {

    @NotNull
    public static final SafetyPolicyNoticeEmbed$$serializer INSTANCE;

    @NotNull
    private static final SerialDescriptor descriptor;

    static {
        SafetyPolicyNoticeEmbed$$serializer safetyPolicyNoticeEmbed$$serializer = new SafetyPolicyNoticeEmbed$$serializer();
        INSTANCE = safetyPolicyNoticeEmbed$$serializer;
        j1 j1Var = new j1("com.discord.chat.bridge.policynotice.SafetyPolicyNoticeEmbed", safetyPolicyNoticeEmbed$$serializer, 6);
        j1Var.k("classificationId", false);
        j1Var.k("titleText", false);
        j1Var.k("titleIcon", false);
        j1Var.k("subtitleText", false);
        j1Var.k("descriptionText", false);
        j1Var.k("ctaText", false);
        descriptor = j1Var;
    }

    private SafetyPolicyNoticeEmbed$$serializer() {
    }

    @Override // bs.h0
    @NotNull
    public final KSerializer[] childSerializers() {
        v1 v1Var = v1.a;
        return new KSerializer[]{v1Var, v1Var, v1Var, v1Var, v1Var, v1Var};
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final SafetyPolicyNoticeEmbed deserialize(@NotNull Decoder decoder) {
        String str;
        String str2;
        String str3;
        String str4;
        String str5;
        String str6;
        int i5;
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeDecoder beginStructure = decoder.beginStructure(serialDescriptor);
        if (beginStructure.decodeSequentially()) {
            str = beginStructure.decodeStringElement(serialDescriptor, 0);
            String decodeStringElement = beginStructure.decodeStringElement(serialDescriptor, 1);
            String decodeStringElement2 = beginStructure.decodeStringElement(serialDescriptor, 2);
            String decodeStringElement3 = beginStructure.decodeStringElement(serialDescriptor, 3);
            String decodeStringElement4 = beginStructure.decodeStringElement(serialDescriptor, 4);
            str2 = beginStructure.decodeStringElement(serialDescriptor, 5);
            str3 = decodeStringElement3;
            str4 = decodeStringElement4;
            str5 = decodeStringElement2;
            str6 = decodeStringElement;
            i5 = 63;
        } else {
            str = null;
            String str7 = null;
            String str8 = null;
            String str9 = null;
            String str10 = null;
            String str11 = null;
            boolean z5 = true;
            int i6 = 0;
            while (z5) {
                int decodeElementIndex = beginStructure.decodeElementIndex(serialDescriptor);
                switch (decodeElementIndex) {
                    case -1:
                        z5 = false;
                        continue;
                    case 0:
                        str = beginStructure.decodeStringElement(serialDescriptor, 0);
                        i6 |= 1;
                        continue;
                    case 1:
                        str11 = beginStructure.decodeStringElement(serialDescriptor, 1);
                        i6 |= 2;
                        break;
                    case 2:
                        str10 = beginStructure.decodeStringElement(serialDescriptor, 2);
                        i6 |= 4;
                        break;
                    case 3:
                        str8 = beginStructure.decodeStringElement(serialDescriptor, 3);
                        i6 |= 8;
                        break;
                    case 4:
                        str9 = beginStructure.decodeStringElement(serialDescriptor, 4);
                        i6 |= 16;
                        break;
                    case 5:
                        str7 = beginStructure.decodeStringElement(serialDescriptor, 5);
                        i6 |= 32;
                        break;
                    default:
                        throw new r(decodeElementIndex);
                }
            }
            str2 = str7;
            str3 = str8;
            str4 = str9;
            str5 = str10;
            str6 = str11;
            i5 = i6;
        }
        String str12 = str;
        beginStructure.endStructure(serialDescriptor);
        return new SafetyPolicyNoticeEmbed(i5, str12, str6, str5, str3, str4, str2, null);
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final SerialDescriptor getDescriptor() {
        return descriptor;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(@NotNull Encoder encoder, @NotNull SafetyPolicyNoticeEmbed value) {
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(value, "value");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeEncoder beginStructure = encoder.beginStructure(serialDescriptor);
        SafetyPolicyNoticeEmbed.write$Self$chat_release(value, beginStructure, serialDescriptor);
        beginStructure.endStructure(serialDescriptor);
    }

    @Override // bs.h0
    @NotNull
    public KSerializer[] typeParametersSerializers() {
        return h1.f3190b;
    }
}
