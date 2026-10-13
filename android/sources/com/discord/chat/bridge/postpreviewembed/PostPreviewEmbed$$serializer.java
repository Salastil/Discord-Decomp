package com.discord.chat.bridge.postpreviewembed;

import androidx.recyclerview.widget.RecyclerView;
import bs.g;
import bs.h0;
import bs.h1;
import bs.j1;
import bs.o0;
import bs.v1;
import com.discord.chat.bridge.structurabletext.StructurableText;
import com.discord.chat.bridge.structurabletext.StructurableTextSerializer;
import com.discord.key_commands.KeyCommandDescriptor;
import com.discord.primitives.ChannelId;
import com.discord.primitives.ChannelId$$serializer;
import com.discord.primitives.GuildId;
import com.discord.primitives.GuildId$$serializer;
import com.discord.primitives.MessageId;
import com.discord.primitives.MessageId$$serializer;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import com.facebook.react.modules.dialog.AlertFragment;
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
import org.webrtc.PeerConnection;

@d
@Metadata(d1 = {"\u0000:\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\bÇ\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0003\u0010\u0004J\u001d\u0010\t\u001a\u00020\b2\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\u0007\u001a\u00020\u0002¢\u0006\u0004\b\t\u0010\nJ\u0015\u0010\r\u001a\u00020\u00022\u0006\u0010\f\u001a\u00020\u000b¢\u0006\u0004\b\r\u0010\u000eJ\u0017\u0010\u0011\u001a\f\u0012\b\u0012\u0006\u0012\u0002\b\u00030\u00100\u000f¢\u0006\u0004\b\u0011\u0010\u0012R\u0017\u0010\u0014\u001a\u00020\u00138\u0006¢\u0006\f\n\u0004\b\u0014\u0010\u0015\u001a\u0004\b\u0016\u0010\u0017¨\u0006\u0018"}, d2 = {"com/discord/chat/bridge/postpreviewembed/PostPreviewEmbed.$serializer", "Lbs/h0;", "Lcom/discord/chat/bridge/postpreviewembed/PostPreviewEmbed;", "<init>", "()V", "Lkotlinx/serialization/encoding/Encoder;", "encoder", "value", "", "serialize", "(Lkotlinx/serialization/encoding/Encoder;Lcom/discord/chat/bridge/postpreviewembed/PostPreviewEmbed;)V", "Lkotlinx/serialization/encoding/Decoder;", "decoder", "deserialize", "(Lkotlinx/serialization/encoding/Decoder;)Lcom/discord/chat/bridge/postpreviewembed/PostPreviewEmbed;", "", "Lkotlinx/serialization/KSerializer;", "childSerializers", "()[Lkotlinx/serialization/KSerializer;", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "descriptor", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "getDescriptor", "()Lkotlinx/serialization/descriptors/SerialDescriptor;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class PostPreviewEmbed$$serializer implements h0 {

    @NotNull
    public static final PostPreviewEmbed$$serializer INSTANCE;

    @NotNull
    private static final SerialDescriptor descriptor;

    static {
        PostPreviewEmbed$$serializer postPreviewEmbed$$serializer = new PostPreviewEmbed$$serializer();
        INSTANCE = postPreviewEmbed$$serializer;
        j1 j1Var = new j1("com.discord.chat.bridge.postpreviewembed.PostPreviewEmbed", postPreviewEmbed$$serializer, 22);
        j1Var.k("parentChannelId", false);
        j1Var.k("threadId", false);
        j1Var.k("messageId", false);
        j1Var.k("guildId", false);
        j1Var.k(AlertFragment.ARG_TITLE, false);
        j1Var.k("ctaText", false);
        j1Var.k("ctaButtonColor", false);
        j1Var.k("footer", false);
        j1Var.k("subtitle", true);
        j1Var.k("coverImage", true);
        j1Var.k("blurredCoverImage", true);
        j1Var.k("coverImageOverlayText", true);
        j1Var.k("backgroundImage", true);
        j1Var.k("spoiler", true);
        j1Var.k("obscure", true);
        j1Var.k("obscureAwaitingScan", true);
        j1Var.k("shouldSpoiler", true);
        j1Var.k("obscureHideControls", true);
        j1Var.k("obscureIsOpaque", true);
        j1Var.k("verifyAge", true);
        j1Var.k("spoilerOrNull", true);
        j1Var.k("obscureOrNull", true);
        descriptor = j1Var;
    }

    private PostPreviewEmbed$$serializer() {
    }

    @Override // bs.h0
    @NotNull
    public final KSerializer[] childSerializers() {
        v1 v1Var = v1.a;
        KSerializer o6 = e.o(v1Var);
        KSerializer o7 = e.o(v1Var);
        KSerializer o10 = e.o(v1Var);
        KSerializer o11 = e.o(v1Var);
        KSerializer o12 = e.o(v1Var);
        KSerializer o13 = e.o(v1Var);
        KSerializer o14 = e.o(v1Var);
        g gVar = g.a;
        KSerializer o15 = e.o(gVar);
        KSerializer o16 = e.o(gVar);
        KSerializer o17 = e.o(gVar);
        KSerializer o18 = e.o(gVar);
        KSerializer o19 = e.o(v1Var);
        KSerializer o20 = e.o(v1Var);
        ChannelId$$serializer channelId$$serializer = ChannelId$$serializer.INSTANCE;
        return new KSerializer[]{channelId$$serializer, channelId$$serializer, MessageId$$serializer.INSTANCE, GuildId$$serializer.INSTANCE, v1Var, v1Var, o0.a, StructurableTextSerializer.INSTANCE, o6, o7, o10, o11, o12, o13, o14, o15, gVar, o16, o17, o18, o19, o20};
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final PostPreviewEmbed deserialize(@NotNull Decoder decoder) {
        String str;
        ChannelId channelId;
        ChannelId channelId2;
        int i5;
        Boolean bool;
        String str2;
        String str3;
        String str4;
        GuildId guildId;
        String str5;
        String str6;
        Boolean bool2;
        Boolean bool3;
        StructurableText structurableText;
        String str7;
        String str8;
        boolean z5;
        String str9;
        String str10;
        String str11;
        int i6;
        String str12;
        Boolean bool4;
        String str13;
        String str14;
        String str15;
        Boolean bool5;
        Boolean bool6;
        int i10;
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeDecoder beginStructure = decoder.beginStructure(serialDescriptor);
        char c6 = 11;
        String str16 = null;
        if (beginStructure.decodeSequentially()) {
            ChannelId$$serializer channelId$$serializer = ChannelId$$serializer.INSTANCE;
            ChannelId channelId3 = (ChannelId) beginStructure.decodeSerializableElement(serialDescriptor, 0, channelId$$serializer, null);
            ChannelId channelId4 = (ChannelId) beginStructure.decodeSerializableElement(serialDescriptor, 1, channelId$$serializer, null);
            MessageId messageId = (MessageId) beginStructure.decodeSerializableElement(serialDescriptor, 2, MessageId$$serializer.INSTANCE, null);
            String m1198unboximpl = messageId != null ? messageId.m1198unboximpl() : null;
            GuildId guildId2 = (GuildId) beginStructure.decodeSerializableElement(serialDescriptor, 3, GuildId$$serializer.INSTANCE, null);
            String decodeStringElement = beginStructure.decodeStringElement(serialDescriptor, 4);
            String decodeStringElement2 = beginStructure.decodeStringElement(serialDescriptor, 5);
            int decodeIntElement = beginStructure.decodeIntElement(serialDescriptor, 6);
            StructurableText structurableText2 = (StructurableText) beginStructure.decodeSerializableElement(serialDescriptor, 7, StructurableTextSerializer.INSTANCE, null);
            v1 v1Var = v1.a;
            String str17 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 8, v1Var, null);
            String str18 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 9, v1Var, null);
            str = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 10, v1Var, null);
            String str19 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 11, v1Var, null);
            String str20 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 12, v1Var, null);
            String str21 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 13, v1Var, null);
            String str22 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 14, v1Var, null);
            g gVar = g.a;
            Boolean bool7 = (Boolean) beginStructure.decodeNullableSerializableElement(serialDescriptor, 15, gVar, null);
            boolean decodeBooleanElement = beginStructure.decodeBooleanElement(serialDescriptor, 16);
            Boolean bool8 = (Boolean) beginStructure.decodeNullableSerializableElement(serialDescriptor, 17, gVar, null);
            Boolean bool9 = (Boolean) beginStructure.decodeNullableSerializableElement(serialDescriptor, 18, gVar, null);
            Boolean bool10 = (Boolean) beginStructure.decodeNullableSerializableElement(serialDescriptor, 19, gVar, null);
            String str23 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 20, v1Var, null);
            bool = bool10;
            str12 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 21, v1Var, null);
            str6 = str23;
            guildId = guildId2;
            str9 = decodeStringElement;
            str7 = str17;
            str11 = m1198unboximpl;
            i6 = decodeIntElement;
            channelId2 = channelId3;
            i5 = 4194303;
            str5 = str19;
            str10 = str18;
            structurableText = structurableText2;
            bool2 = bool9;
            bool4 = bool8;
            z5 = decodeBooleanElement;
            bool3 = bool7;
            str2 = str22;
            str3 = str21;
            str4 = str20;
            channelId = channelId4;
            str8 = decodeStringElement2;
        } else {
            boolean z6 = true;
            int i11 = 0;
            boolean z7 = false;
            int i12 = 0;
            ChannelId channelId5 = null;
            Boolean bool11 = null;
            String str24 = null;
            Boolean bool12 = null;
            Boolean bool13 = null;
            String str25 = null;
            String str26 = null;
            String str27 = null;
            String str28 = null;
            Boolean bool14 = null;
            String str29 = null;
            GuildId guildId3 = null;
            String str30 = null;
            String str31 = null;
            String str32 = null;
            ChannelId channelId6 = null;
            String str33 = null;
            String str34 = null;
            StructurableText structurableText3 = null;
            while (z6) {
                int decodeElementIndex = beginStructure.decodeElementIndex(serialDescriptor);
                switch (decodeElementIndex) {
                    case -1:
                        str13 = str31;
                        str14 = str33;
                        z6 = false;
                        bool12 = bool12;
                        str24 = str24;
                        c6 = 11;
                        str33 = str14;
                        str31 = str13;
                    case 0:
                        str15 = str24;
                        bool5 = bool12;
                        str13 = str31;
                        str14 = str33;
                        bool6 = bool11;
                        channelId6 = (ChannelId) beginStructure.decodeSerializableElement(serialDescriptor, 0, ChannelId$$serializer.INSTANCE, channelId6);
                        i11 |= 1;
                        bool12 = bool5;
                        str24 = str15;
                        bool11 = bool6;
                        c6 = 11;
                        str33 = str14;
                        str31 = str13;
                    case 1:
                        str15 = str24;
                        bool5 = bool12;
                        str13 = str31;
                        str14 = str33;
                        bool6 = bool11;
                        channelId5 = (ChannelId) beginStructure.decodeSerializableElement(serialDescriptor, 1, ChannelId$$serializer.INSTANCE, channelId5);
                        i11 |= 2;
                        bool12 = bool5;
                        str24 = str15;
                        bool11 = bool6;
                        c6 = 11;
                        str33 = str14;
                        str31 = str13;
                    case 2:
                        str15 = str24;
                        GuildId guildId4 = guildId3;
                        str13 = str31;
                        str14 = str33;
                        String str35 = str34;
                        StructurableText structurableText4 = structurableText3;
                        bool6 = bool11;
                        Boolean bool15 = bool12;
                        MessageId messageId2 = (MessageId) beginStructure.decodeSerializableElement(serialDescriptor, 2, MessageId$$serializer.INSTANCE, str32 != null ? MessageId.m1189boximpl(str32) : null);
                        str32 = messageId2 != null ? messageId2.m1198unboximpl() : null;
                        i11 |= 4;
                        guildId3 = guildId4;
                        bool12 = bool15;
                        structurableText3 = structurableText4;
                        str34 = str35;
                        str24 = str15;
                        bool11 = bool6;
                        c6 = 11;
                        str33 = str14;
                        str31 = str13;
                    case 3:
                        str15 = str24;
                        str13 = str31;
                        str14 = str33;
                        bool6 = bool11;
                        guildId3 = (GuildId) beginStructure.decodeSerializableElement(serialDescriptor, 3, GuildId$$serializer.INSTANCE, guildId3);
                        i11 |= 8;
                        structurableText3 = structurableText3;
                        str24 = str15;
                        bool11 = bool6;
                        c6 = 11;
                        str33 = str14;
                        str31 = str13;
                    case 4:
                        str15 = str24;
                        str13 = str31;
                        str14 = str33;
                        bool6 = bool11;
                        str30 = beginStructure.decodeStringElement(serialDescriptor, 4);
                        i11 |= 16;
                        str24 = str15;
                        bool11 = bool6;
                        c6 = 11;
                        str33 = str14;
                        str31 = str13;
                    case 5:
                        str15 = str24;
                        str13 = str31;
                        str14 = str33;
                        bool6 = bool11;
                        str29 = beginStructure.decodeStringElement(serialDescriptor, 5);
                        i11 |= 32;
                        str24 = str15;
                        bool11 = bool6;
                        c6 = 11;
                        str33 = str14;
                        str31 = str13;
                    case 6:
                        str15 = str24;
                        str13 = str31;
                        str14 = str33;
                        bool6 = bool11;
                        i12 = beginStructure.decodeIntElement(serialDescriptor, 6);
                        i11 |= 64;
                        str24 = str15;
                        bool11 = bool6;
                        c6 = 11;
                        str33 = str14;
                        str31 = str13;
                    case 7:
                        str15 = str24;
                        str14 = str33;
                        bool6 = bool11;
                        str13 = str31;
                        structurableText3 = (StructurableText) beginStructure.decodeSerializableElement(serialDescriptor, 7, StructurableTextSerializer.INSTANCE, structurableText3);
                        i11 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                        str24 = str15;
                        bool11 = bool6;
                        c6 = 11;
                        str33 = str14;
                        str31 = str13;
                    case 8:
                        String str36 = str24;
                        String str37 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 8, v1.a, str31);
                        i11 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER;
                        str34 = str34;
                        bool11 = bool11;
                        c6 = 11;
                        str31 = str37;
                        str33 = str33;
                        str24 = str36;
                    case 9:
                        str34 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 9, v1.a, str34);
                        i11 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING;
                        str24 = str24;
                        bool11 = bool11;
                        c6 = 11;
                        str33 = str33;
                    case 10:
                        String str38 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 10, v1.a, str33);
                        i11 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET;
                        bool11 = bool11;
                        str33 = str38;
                        c6 = 11;
                    case 11:
                        str27 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 11, v1.a, str27);
                        i11 |= RecyclerView.ItemAnimator.FLAG_MOVED;
                        c6 = 11;
                    case 12:
                        str16 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 12, v1.a, str16);
                        i11 |= RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT;
                        c6 = 11;
                    case 13:
                        str26 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 13, v1.a, str26);
                        i11 |= 8192;
                        c6 = 11;
                    case 14:
                        str25 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 14, v1.a, str25);
                        i11 |= 16384;
                        c6 = 11;
                    case 15:
                        bool12 = (Boolean) beginStructure.decodeNullableSerializableElement(serialDescriptor, 15, g.a, bool12);
                        i10 = PeerConnection.PORTALLOCATOR_ENABLE_ANY_ADDRESS_PORTS;
                        i11 |= i10;
                        c6 = 11;
                    case 16:
                        z7 = beginStructure.decodeBooleanElement(serialDescriptor, 16);
                        i11 |= KeyCommandDescriptor.ModifierFlags.ALPHA_SHIFT;
                        c6 = 11;
                    case 17:
                        bool11 = (Boolean) beginStructure.decodeNullableSerializableElement(serialDescriptor, 17, g.a, bool11);
                        i10 = KeyCommandDescriptor.ModifierFlags.SHIFT;
                        i11 |= i10;
                        c6 = 11;
                    case 18:
                        bool14 = (Boolean) beginStructure.decodeNullableSerializableElement(serialDescriptor, 18, g.a, bool14);
                        i10 = KeyCommandDescriptor.ModifierFlags.CONTROL;
                        i11 |= i10;
                        c6 = 11;
                    case 19:
                        bool13 = (Boolean) beginStructure.decodeNullableSerializableElement(serialDescriptor, 19, g.a, bool13);
                        i10 = KeyCommandDescriptor.ModifierFlags.ALTERNATE;
                        i11 |= i10;
                        c6 = 11;
                    case 20:
                        str28 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 20, v1.a, str28);
                        i10 = KeyCommandDescriptor.ModifierFlags.COMMAND;
                        i11 |= i10;
                        c6 = 11;
                    case 21:
                        str24 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 21, v1.a, str24);
                        i10 = KeyCommandDescriptor.ModifierFlags.NUMERIC_PAD;
                        i11 |= i10;
                        c6 = 11;
                    default:
                        throw new r(decodeElementIndex);
                }
            }
            str = str33;
            channelId = channelId5;
            channelId2 = channelId6;
            i5 = i11;
            bool = bool13;
            str2 = str25;
            str3 = str26;
            str4 = str16;
            guildId = guildId3;
            str5 = str27;
            str6 = str28;
            bool2 = bool14;
            bool3 = bool12;
            structurableText = structurableText3;
            str7 = str31;
            str8 = str29;
            z5 = z7;
            str9 = str30;
            str10 = str34;
            str11 = str32;
            i6 = i12;
            str12 = str24;
            bool4 = bool11;
        }
        String str39 = str;
        beginStructure.endStructure(serialDescriptor);
        return new PostPreviewEmbed(i5, channelId2, channelId, str11, guildId, str9, str8, i6, structurableText, str7, str10, str39, str5, str4, str3, str2, bool3, z5, bool4, bool2, bool, str6, str12, null, null);
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final SerialDescriptor getDescriptor() {
        return descriptor;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(@NotNull Encoder encoder, @NotNull PostPreviewEmbed value) {
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(value, "value");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeEncoder beginStructure = encoder.beginStructure(serialDescriptor);
        PostPreviewEmbed.write$Self$chat_release(value, beginStructure, serialDescriptor);
        beginStructure.endStructure(serialDescriptor);
    }

    @Override // bs.h0
    @NotNull
    public KSerializer[] typeParametersSerializers() {
        return h1.f3190b;
    }
}
