package com.discord.mobile_voice_overlay;

import bs.h0;
import bs.h1;
import bs.j1;
import bs.v1;
import com.discord.notifications.renderer.NotificationRenderer;
import com.discord.primitives.ChannelId;
import com.discord.primitives.ChannelId$$serializer;
import com.discord.primitives.GuildId;
import com.discord.primitives.GuildId$$serializer;
import ds.r;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.serialization.KSerializer;
import kotlinx.serialization.descriptors.SerialDescriptor;
import kotlinx.serialization.encoding.CompositeDecoder;
import kotlinx.serialization.encoding.CompositeEncoder;
import kotlinx.serialization.encoding.Decoder;
import kotlinx.serialization.encoding.Encoder;
import org.jetbrains.annotations.NotNull;

@fo.d
@Metadata(d1 = {"\u0000:\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\bÇ\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0003\u0010\u0004J\u001d\u0010\t\u001a\u00020\b2\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\u0007\u001a\u00020\u0002¢\u0006\u0004\b\t\u0010\nJ\u0015\u0010\r\u001a\u00020\u00022\u0006\u0010\f\u001a\u00020\u000b¢\u0006\u0004\b\r\u0010\u000eJ\u0017\u0010\u0011\u001a\f\u0012\b\u0012\u0006\u0012\u0002\b\u00030\u00100\u000f¢\u0006\u0004\b\u0011\u0010\u0012R\u0017\u0010\u0014\u001a\u00020\u00138\u0006¢\u0006\f\n\u0004\b\u0014\u0010\u0015\u001a\u0004\b\u0016\u0010\u0017¨\u0006\u0018"}, d2 = {"com/discord/mobile_voice_overlay/MobileVoiceOverlaySelectorResult.$serializer", "Lbs/h0;", "Lcom/discord/mobile_voice_overlay/MobileVoiceOverlaySelectorResult;", "<init>", "()V", "Lkotlinx/serialization/encoding/Encoder;", "encoder", "value", "", "serialize", "(Lkotlinx/serialization/encoding/Encoder;Lcom/discord/mobile_voice_overlay/MobileVoiceOverlaySelectorResult;)V", "Lkotlinx/serialization/encoding/Decoder;", "decoder", "deserialize", "(Lkotlinx/serialization/encoding/Decoder;)Lcom/discord/mobile_voice_overlay/MobileVoiceOverlaySelectorResult;", "", "Lkotlinx/serialization/KSerializer;", "childSerializers", "()[Lkotlinx/serialization/KSerializer;", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "descriptor", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "getDescriptor", "()Lkotlinx/serialization/descriptors/SerialDescriptor;", "mobile_voice_overlay_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class MobileVoiceOverlaySelectorResult$$serializer implements h0 {

    @NotNull
    public static final MobileVoiceOverlaySelectorResult$$serializer INSTANCE;

    @NotNull
    private static final SerialDescriptor descriptor;

    static {
        MobileVoiceOverlaySelectorResult$$serializer mobileVoiceOverlaySelectorResult$$serializer = new MobileVoiceOverlaySelectorResult$$serializer();
        INSTANCE = mobileVoiceOverlaySelectorResult$$serializer;
        j1 j1Var = new j1("com.discord.mobile_voice_overlay.MobileVoiceOverlaySelectorResult", mobileVoiceOverlaySelectorResult$$serializer, 5);
        j1Var.k("guildId", false);
        j1Var.k("channelId", false);
        j1Var.k(NotificationRenderer.CHANNEL_NAME, false);
        j1Var.k("guildName", false);
        j1Var.k("categoryName", false);
        descriptor = j1Var;
    }

    private MobileVoiceOverlaySelectorResult$$serializer() {
    }

    @Override // bs.h0
    @NotNull
    public final KSerializer[] childSerializers() {
        v1 v1Var = v1.a;
        return new KSerializer[]{GuildId$$serializer.INSTANCE, ChannelId$$serializer.INSTANCE, v1Var, v1Var, v1Var};
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final MobileVoiceOverlaySelectorResult deserialize(@NotNull Decoder decoder) {
        int i5;
        GuildId guildId;
        ChannelId channelId;
        String str;
        String str2;
        String str3;
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeDecoder beginStructure = decoder.beginStructure(serialDescriptor);
        GuildId guildId2 = null;
        if (beginStructure.decodeSequentially()) {
            GuildId guildId3 = (GuildId) beginStructure.decodeSerializableElement(serialDescriptor, 0, GuildId$$serializer.INSTANCE, null);
            ChannelId channelId2 = (ChannelId) beginStructure.decodeSerializableElement(serialDescriptor, 1, ChannelId$$serializer.INSTANCE, null);
            String decodeStringElement = beginStructure.decodeStringElement(serialDescriptor, 2);
            guildId = guildId3;
            str2 = beginStructure.decodeStringElement(serialDescriptor, 3);
            str3 = beginStructure.decodeStringElement(serialDescriptor, 4);
            str = decodeStringElement;
            channelId = channelId2;
            i5 = 31;
        } else {
            boolean z5 = true;
            int i6 = 0;
            ChannelId channelId3 = null;
            String str4 = null;
            String str5 = null;
            String str6 = null;
            while (z5) {
                int decodeElementIndex = beginStructure.decodeElementIndex(serialDescriptor);
                if (decodeElementIndex == -1) {
                    z5 = false;
                } else if (decodeElementIndex == 0) {
                    guildId2 = (GuildId) beginStructure.decodeSerializableElement(serialDescriptor, 0, GuildId$$serializer.INSTANCE, guildId2);
                    i6 |= 1;
                } else if (decodeElementIndex == 1) {
                    channelId3 = (ChannelId) beginStructure.decodeSerializableElement(serialDescriptor, 1, ChannelId$$serializer.INSTANCE, channelId3);
                    i6 |= 2;
                } else if (decodeElementIndex == 2) {
                    str4 = beginStructure.decodeStringElement(serialDescriptor, 2);
                    i6 |= 4;
                } else if (decodeElementIndex == 3) {
                    str5 = beginStructure.decodeStringElement(serialDescriptor, 3);
                    i6 |= 8;
                } else {
                    if (decodeElementIndex != 4) {
                        throw new r(decodeElementIndex);
                    }
                    str6 = beginStructure.decodeStringElement(serialDescriptor, 4);
                    i6 |= 16;
                }
            }
            i5 = i6;
            guildId = guildId2;
            channelId = channelId3;
            str = str4;
            str2 = str5;
            str3 = str6;
        }
        beginStructure.endStructure(serialDescriptor);
        return new MobileVoiceOverlaySelectorResult(i5, guildId, channelId, str, str2, str3, null, null);
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final SerialDescriptor getDescriptor() {
        return descriptor;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(@NotNull Encoder encoder, @NotNull MobileVoiceOverlaySelectorResult value) {
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(value, "value");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeEncoder beginStructure = encoder.beginStructure(serialDescriptor);
        MobileVoiceOverlaySelectorResult.write$Self$mobile_voice_overlay_release(value, beginStructure, serialDescriptor);
        beginStructure.endStructure(serialDescriptor);
    }

    @Override // bs.h0
    @NotNull
    public KSerializer[] typeParametersSerializers() {
        return h1.f3190b;
    }
}
