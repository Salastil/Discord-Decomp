package com.discord.chat.bridge.forums;

import bs.g;
import bs.h0;
import bs.h1;
import bs.j1;
import bs.o0;
import bs.v1;
import com.discord.chat.bridge.reaction.MessageReaction;
import com.discord.chat.bridge.reaction.MessageReaction$$serializer;
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
import kotlinx.serialization.internal.SerializationConstructorMarker;
import nf.e;
import org.jetbrains.annotations.NotNull;

@d
@Metadata(d1 = {"\u0000:\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\bÇ\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0003\u0010\u0004J\u001d\u0010\t\u001a\u00020\b2\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\u0007\u001a\u00020\u0002¢\u0006\u0004\b\t\u0010\nJ\u0015\u0010\r\u001a\u00020\u00022\u0006\u0010\f\u001a\u00020\u000b¢\u0006\u0004\b\r\u0010\u000eJ\u0017\u0010\u0011\u001a\f\u0012\b\u0012\u0006\u0012\u0002\b\u00030\u00100\u000f¢\u0006\u0004\b\u0011\u0010\u0012R\u0017\u0010\u0014\u001a\u00020\u00138\u0006¢\u0006\f\n\u0004\b\u0014\u0010\u0015\u001a\u0004\b\u0016\u0010\u0017¨\u0006\u0018"}, d2 = {"com/discord/chat/bridge/forums/ForumPostActions.$serializer", "Lbs/h0;", "Lcom/discord/chat/bridge/forums/ForumPostActions;", "<init>", "()V", "Lkotlinx/serialization/encoding/Encoder;", "encoder", "value", "", "serialize", "(Lkotlinx/serialization/encoding/Encoder;Lcom/discord/chat/bridge/forums/ForumPostActions;)V", "Lkotlinx/serialization/encoding/Decoder;", "decoder", "deserialize", "(Lkotlinx/serialization/encoding/Decoder;)Lcom/discord/chat/bridge/forums/ForumPostActions;", "", "Lkotlinx/serialization/KSerializer;", "childSerializers", "()[Lkotlinx/serialization/KSerializer;", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "descriptor", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "getDescriptor", "()Lkotlinx/serialization/descriptors/SerialDescriptor;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class ForumPostActions$$serializer implements h0 {

    @NotNull
    public static final ForumPostActions$$serializer INSTANCE;

    @NotNull
    private static final SerialDescriptor descriptor;

    static {
        ForumPostActions$$serializer forumPostActions$$serializer = new ForumPostActions$$serializer();
        INSTANCE = forumPostActions$$serializer;
        j1 j1Var = new j1("com.discord.chat.bridge.forums.ForumPostActions", forumPostActions$$serializer, 8);
        j1Var.k("numDisplayedReactions", false);
        j1Var.k("isFollowing", false);
        j1Var.k("followIcon", true);
        j1Var.k("followLabel", false);
        j1Var.k("shareIcon", true);
        j1Var.k("shareLabel", false);
        j1Var.k("defaultReaction", true);
        j1Var.k("sharePrompt", true);
        descriptor = j1Var;
    }

    private ForumPostActions$$serializer() {
    }

    @Override // bs.h0
    @NotNull
    public final KSerializer[] childSerializers() {
        v1 v1Var = v1.a;
        return new KSerializer[]{o0.a, g.a, e.o(v1Var), v1Var, e.o(v1Var), v1Var, e.o(MessageReaction$$serializer.INSTANCE), e.o(PostSharePrompt$$serializer.INSTANCE)};
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final ForumPostActions deserialize(@NotNull Decoder decoder) {
        int i5;
        PostSharePrompt postSharePrompt;
        MessageReaction messageReaction;
        boolean z5;
        int i6;
        String str;
        String str2;
        String str3;
        String str4;
        char c6;
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeDecoder beginStructure = decoder.beginStructure(serialDescriptor);
        int i10 = 7;
        if (beginStructure.decodeSequentially()) {
            i5 = beginStructure.decodeIntElement(serialDescriptor, 0);
            boolean decodeBooleanElement = beginStructure.decodeBooleanElement(serialDescriptor, 1);
            v1 v1Var = v1.a;
            String str5 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 2, v1Var, null);
            String decodeStringElement = beginStructure.decodeStringElement(serialDescriptor, 3);
            String str6 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 4, v1Var, null);
            String decodeStringElement2 = beginStructure.decodeStringElement(serialDescriptor, 5);
            MessageReaction messageReaction2 = (MessageReaction) beginStructure.decodeNullableSerializableElement(serialDescriptor, 6, MessageReaction$$serializer.INSTANCE, null);
            postSharePrompt = (PostSharePrompt) beginStructure.decodeNullableSerializableElement(serialDescriptor, 7, PostSharePrompt$$serializer.INSTANCE, null);
            messageReaction = messageReaction2;
            str4 = decodeStringElement2;
            str2 = decodeStringElement;
            str3 = str6;
            str = str5;
            z5 = decodeBooleanElement;
            i6 = 255;
        } else {
            boolean z6 = true;
            i5 = 0;
            int i11 = 0;
            PostSharePrompt postSharePrompt2 = null;
            String str7 = null;
            String str8 = null;
            String str9 = null;
            String str10 = null;
            boolean z7 = false;
            MessageReaction messageReaction3 = null;
            while (z6) {
                int decodeElementIndex = beginStructure.decodeElementIndex(serialDescriptor);
                switch (decodeElementIndex) {
                    case -1:
                        z6 = false;
                    case 0:
                        i11 |= 1;
                        i5 = beginStructure.decodeIntElement(serialDescriptor, 0);
                        i10 = 7;
                    case 1:
                        c6 = 2;
                        z7 = beginStructure.decodeBooleanElement(serialDescriptor, 1);
                        i11 |= 2;
                        i10 = 7;
                    case 2:
                        c6 = 2;
                        str7 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 2, v1.a, str7);
                        i11 |= 4;
                        i10 = 7;
                    case 3:
                        str8 = beginStructure.decodeStringElement(serialDescriptor, 3);
                        i11 |= 8;
                    case 4:
                        str9 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 4, v1.a, str9);
                        i11 |= 16;
                    case 5:
                        str10 = beginStructure.decodeStringElement(serialDescriptor, 5);
                        i11 |= 32;
                    case 6:
                        messageReaction3 = (MessageReaction) beginStructure.decodeNullableSerializableElement(serialDescriptor, 6, MessageReaction$$serializer.INSTANCE, messageReaction3);
                        i11 |= 64;
                    case 7:
                        postSharePrompt2 = (PostSharePrompt) beginStructure.decodeNullableSerializableElement(serialDescriptor, i10, PostSharePrompt$$serializer.INSTANCE, postSharePrompt2);
                        i11 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                    default:
                        throw new r(decodeElementIndex);
                }
            }
            postSharePrompt = postSharePrompt2;
            messageReaction = messageReaction3;
            z5 = z7;
            i6 = i11;
            str = str7;
            str2 = str8;
            str3 = str9;
            str4 = str10;
        }
        int i12 = i5;
        beginStructure.endStructure(serialDescriptor);
        return new ForumPostActions(i6, i12, z5, str, str2, str3, str4, messageReaction, postSharePrompt, (SerializationConstructorMarker) null);
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final SerialDescriptor getDescriptor() {
        return descriptor;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(@NotNull Encoder encoder, @NotNull ForumPostActions value) {
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(value, "value");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeEncoder beginStructure = encoder.beginStructure(serialDescriptor);
        ForumPostActions.write$Self$chat_release(value, beginStructure, serialDescriptor);
        beginStructure.endStructure(serialDescriptor);
    }

    @Override // bs.h0
    @NotNull
    public KSerializer[] typeParametersSerializers() {
        return h1.f3190b;
    }
}
