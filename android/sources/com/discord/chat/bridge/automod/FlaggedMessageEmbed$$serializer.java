package com.discord.chat.bridge.automod;

import androidx.recyclerview.widget.RecyclerView;
import bs.g;
import bs.h0;
import bs.h1;
import bs.j1;
import bs.o0;
import bs.v1;
import com.discord.chat.bridge.structurabletext.StructurableText;
import com.discord.chat.bridge.structurabletext.StructurableTextSerializer;
import com.discord.notifications.renderer.NotificationRenderer;
import com.discord.primitives.ChannelId;
import com.discord.primitives.ChannelId$$serializer;
import com.discord.primitives.GuildId;
import com.discord.primitives.GuildId$$serializer;
import com.discord.primitives.MessageId;
import com.discord.primitives.MessageId$$serializer;
import com.discord.primitives.UserId;
import com.discord.primitives.UserId$$serializer;
import com.facebook.react.devsupport.StackTraceHelper;
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
@Metadata(d1 = {"\u0000:\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\bÇ\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0003\u0010\u0004J\u001d\u0010\t\u001a\u00020\b2\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\u0007\u001a\u00020\u0002¢\u0006\u0004\b\t\u0010\nJ\u0015\u0010\r\u001a\u00020\u00022\u0006\u0010\f\u001a\u00020\u000b¢\u0006\u0004\b\r\u0010\u000eJ\u0017\u0010\u0011\u001a\f\u0012\b\u0012\u0006\u0012\u0002\b\u00030\u00100\u000f¢\u0006\u0004\b\u0011\u0010\u0012R\u0017\u0010\u0014\u001a\u00020\u00138\u0006¢\u0006\f\n\u0004\b\u0014\u0010\u0015\u001a\u0004\b\u0016\u0010\u0017¨\u0006\u0018"}, d2 = {"com/discord/chat/bridge/automod/FlaggedMessageEmbed.$serializer", "Lbs/h0;", "Lcom/discord/chat/bridge/automod/FlaggedMessageEmbed;", "<init>", "()V", "Lkotlinx/serialization/encoding/Encoder;", "encoder", "value", "", "serialize", "(Lkotlinx/serialization/encoding/Encoder;Lcom/discord/chat/bridge/automod/FlaggedMessageEmbed;)V", "Lkotlinx/serialization/encoding/Decoder;", "decoder", "deserialize", "(Lkotlinx/serialization/encoding/Decoder;)Lcom/discord/chat/bridge/automod/FlaggedMessageEmbed;", "", "Lkotlinx/serialization/KSerializer;", "childSerializers", "()[Lkotlinx/serialization/KSerializer;", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "descriptor", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "getDescriptor", "()Lkotlinx/serialization/descriptors/SerialDescriptor;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class FlaggedMessageEmbed$$serializer implements h0 {

    @NotNull
    public static final FlaggedMessageEmbed$$serializer INSTANCE;

    @NotNull
    private static final SerialDescriptor descriptor;

    static {
        FlaggedMessageEmbed$$serializer flaggedMessageEmbed$$serializer = new FlaggedMessageEmbed$$serializer();
        INSTANCE = flaggedMessageEmbed$$serializer;
        j1 j1Var = new j1("com.discord.chat.bridge.automod.FlaggedMessageEmbed", flaggedMessageEmbed$$serializer, 12);
        j1Var.k(StackTraceHelper.ID_KEY, false);
        j1Var.k("channelId", false);
        j1Var.k("guildId", true);
        j1Var.k("userId", true);
        j1Var.k("content", true);
        j1Var.k(NotificationRenderer.CHANNEL_NAME, true);
        j1Var.k(NotificationRenderer.USERNAME, true);
        j1Var.k("usernameColor", false);
        j1Var.k("roleColor", true);
        j1Var.k("shouldShowRoleDot", false);
        j1Var.k("avatarURL", true);
        j1Var.k("communicationDisabled", true);
        descriptor = j1Var;
    }

    private FlaggedMessageEmbed$$serializer() {
    }

    @Override // bs.h0
    @NotNull
    public final KSerializer[] childSerializers() {
        KSerializer o6 = e.o(GuildId$$serializer.INSTANCE);
        KSerializer o7 = e.o(UserId$$serializer.INSTANCE);
        KSerializer o10 = e.o(StructurableTextSerializer.INSTANCE);
        v1 v1Var = v1.a;
        KSerializer o11 = e.o(v1Var);
        KSerializer o12 = e.o(v1Var);
        o0 o0Var = o0.a;
        KSerializer o13 = e.o(o0Var);
        g gVar = g.a;
        return new KSerializer[]{MessageId$$serializer.INSTANCE, ChannelId$$serializer.INSTANCE, o6, o7, o10, o11, o12, o0Var, o13, gVar, e.o(v1Var), e.o(gVar)};
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final FlaggedMessageEmbed deserialize(@NotNull Decoder decoder) {
        String str;
        Integer num;
        StructurableText structurableText;
        GuildId guildId;
        ChannelId channelId;
        Boolean bool;
        int i5;
        UserId userId;
        String str2;
        String str3;
        String str4;
        boolean z5;
        int i6;
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeDecoder beginStructure = decoder.beginStructure(serialDescriptor);
        int i10 = 10;
        int i11 = 9;
        int i12 = 7;
        char c6 = 6;
        String str5 = null;
        if (beginStructure.decodeSequentially()) {
            MessageId messageId = (MessageId) beginStructure.decodeSerializableElement(serialDescriptor, 0, MessageId$$serializer.INSTANCE, null);
            str = messageId != null ? messageId.m1198unboximpl() : null;
            ChannelId channelId2 = (ChannelId) beginStructure.decodeSerializableElement(serialDescriptor, 1, ChannelId$$serializer.INSTANCE, null);
            GuildId guildId2 = (GuildId) beginStructure.decodeNullableSerializableElement(serialDescriptor, 2, GuildId$$serializer.INSTANCE, null);
            UserId userId2 = (UserId) beginStructure.decodeNullableSerializableElement(serialDescriptor, 3, UserId$$serializer.INSTANCE, null);
            StructurableText structurableText2 = (StructurableText) beginStructure.decodeNullableSerializableElement(serialDescriptor, 4, StructurableTextSerializer.INSTANCE, null);
            v1 v1Var = v1.a;
            String str6 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 5, v1Var, null);
            String str7 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 6, v1Var, null);
            int decodeIntElement = beginStructure.decodeIntElement(serialDescriptor, 7);
            num = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 8, o0.a, null);
            boolean decodeBooleanElement = beginStructure.decodeBooleanElement(serialDescriptor, 9);
            str4 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 10, v1Var, null);
            z5 = decodeBooleanElement;
            i6 = decodeIntElement;
            str3 = str7;
            str2 = str6;
            userId = userId2;
            bool = (Boolean) beginStructure.decodeNullableSerializableElement(serialDescriptor, 11, g.a, null);
            structurableText = structurableText2;
            guildId = guildId2;
            channelId = channelId2;
            i5 = 4095;
        } else {
            boolean z6 = true;
            int i13 = 0;
            boolean z7 = false;
            int i14 = 0;
            str = null;
            num = null;
            Boolean bool2 = null;
            UserId userId3 = null;
            String str8 = null;
            String str9 = null;
            StructurableText structurableText3 = null;
            GuildId guildId3 = null;
            ChannelId channelId3 = null;
            while (z6) {
                int decodeElementIndex = beginStructure.decodeElementIndex(serialDescriptor);
                switch (decodeElementIndex) {
                    case -1:
                        z6 = false;
                        i10 = 10;
                        i11 = 9;
                        i12 = 7;
                        c6 = 6;
                    case 0:
                        StructurableText structurableText4 = structurableText3;
                        GuildId guildId4 = guildId3;
                        ChannelId channelId4 = channelId3;
                        MessageId messageId2 = (MessageId) beginStructure.decodeSerializableElement(serialDescriptor, 0, MessageId$$serializer.INSTANCE, str != null ? MessageId.m1189boximpl(str) : null);
                        str = messageId2 != null ? messageId2.m1198unboximpl() : null;
                        i13 |= 1;
                        structurableText3 = structurableText4;
                        guildId3 = guildId4;
                        channelId3 = channelId4;
                        i10 = 10;
                        i11 = 9;
                        i12 = 7;
                        c6 = 6;
                    case 1:
                        channelId3 = (ChannelId) beginStructure.decodeSerializableElement(serialDescriptor, 1, ChannelId$$serializer.INSTANCE, channelId3);
                        i13 |= 2;
                        i10 = 10;
                        i11 = 9;
                        i12 = 7;
                        c6 = 6;
                    case 2:
                        guildId3 = (GuildId) beginStructure.decodeNullableSerializableElement(serialDescriptor, 2, GuildId$$serializer.INSTANCE, guildId3);
                        i13 |= 4;
                        i10 = 10;
                        i11 = 9;
                        i12 = 7;
                        c6 = 6;
                    case 3:
                        userId3 = (UserId) beginStructure.decodeNullableSerializableElement(serialDescriptor, 3, UserId$$serializer.INSTANCE, userId3);
                        i13 |= 8;
                        i10 = 10;
                        i11 = 9;
                        c6 = 6;
                    case 4:
                        i13 |= 16;
                        structurableText3 = (StructurableText) beginStructure.decodeNullableSerializableElement(serialDescriptor, 4, StructurableTextSerializer.INSTANCE, structurableText3);
                        i10 = 10;
                        i11 = 9;
                        c6 = 6;
                    case 5:
                        str8 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 5, v1.a, str8);
                        i13 |= 32;
                        i10 = 10;
                        c6 = 6;
                    case 6:
                        str9 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 6, v1.a, str9);
                        i13 |= 64;
                        c6 = 6;
                        i10 = 10;
                    case 7:
                        i14 = beginStructure.decodeIntElement(serialDescriptor, i12);
                        i13 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                        c6 = 6;
                    case 8:
                        num = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 8, o0.a, num);
                        i13 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER;
                        c6 = 6;
                    case 9:
                        z7 = beginStructure.decodeBooleanElement(serialDescriptor, i11);
                        i13 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING;
                        c6 = 6;
                    case 10:
                        str5 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, i10, v1.a, str5);
                        i13 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET;
                        c6 = 6;
                    case 11:
                        bool2 = (Boolean) beginStructure.decodeNullableSerializableElement(serialDescriptor, 11, g.a, bool2);
                        i13 |= RecyclerView.ItemAnimator.FLAG_MOVED;
                        c6 = 6;
                    default:
                        throw new r(decodeElementIndex);
                }
            }
            structurableText = structurableText3;
            guildId = guildId3;
            channelId = channelId3;
            bool = bool2;
            i5 = i13;
            userId = userId3;
            str2 = str8;
            str3 = str9;
            str4 = str5;
            z5 = z7;
            i6 = i14;
        }
        String str10 = str;
        Integer num2 = num;
        beginStructure.endStructure(serialDescriptor);
        return new FlaggedMessageEmbed(i5, str10, channelId, guildId, userId, structurableText, str2, str3, i6, num2, z5, str4, bool, null, null);
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final SerialDescriptor getDescriptor() {
        return descriptor;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(@NotNull Encoder encoder, @NotNull FlaggedMessageEmbed value) {
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(value, "value");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeEncoder beginStructure = encoder.beginStructure(serialDescriptor);
        FlaggedMessageEmbed.write$Self$chat_release(value, beginStructure, serialDescriptor);
        beginStructure.endStructure(serialDescriptor);
    }

    @Override // bs.h0
    @NotNull
    public KSerializer[] typeParametersSerializers() {
        return h1.f3190b;
    }
}
