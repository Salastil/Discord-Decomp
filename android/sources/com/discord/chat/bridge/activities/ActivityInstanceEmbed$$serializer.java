package com.discord.chat.bridge.activities;

import bs.h0;
import bs.h1;
import bs.j1;
import bs.v1;
import com.discord.chat.bridge.codedlinks.AppMessageEmbedImpl;
import com.discord.chat.bridge.codedlinks.AppMessageEmbedImpl$$serializer;
import com.discord.primitives.ApplicationId;
import com.discord.primitives.ApplicationId$$serializer;
import ds.r;
import fo.d;
import java.util.List;
import kotlin.Lazy;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.serialization.DeserializationStrategy;
import kotlinx.serialization.KSerializer;
import kotlinx.serialization.descriptors.SerialDescriptor;
import kotlinx.serialization.encoding.CompositeDecoder;
import kotlinx.serialization.encoding.CompositeEncoder;
import kotlinx.serialization.encoding.Decoder;
import kotlinx.serialization.encoding.Encoder;
import nf.e;
import org.jetbrains.annotations.NotNull;

@d
@Metadata(d1 = {"\u0000:\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\bÇ\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0003\u0010\u0004J\u001d\u0010\t\u001a\u00020\b2\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\u0007\u001a\u00020\u0002¢\u0006\u0004\b\t\u0010\nJ\u0015\u0010\r\u001a\u00020\u00022\u0006\u0010\f\u001a\u00020\u000b¢\u0006\u0004\b\r\u0010\u000eJ\u0017\u0010\u0011\u001a\f\u0012\b\u0012\u0006\u0012\u0002\b\u00030\u00100\u000f¢\u0006\u0004\b\u0011\u0010\u0012R\u0017\u0010\u0014\u001a\u00020\u00138\u0006¢\u0006\f\n\u0004\b\u0014\u0010\u0015\u001a\u0004\b\u0016\u0010\u0017¨\u0006\u0018"}, d2 = {"com/discord/chat/bridge/activities/ActivityInstanceEmbed.$serializer", "Lbs/h0;", "Lcom/discord/chat/bridge/activities/ActivityInstanceEmbed;", "<init>", "()V", "Lkotlinx/serialization/encoding/Encoder;", "encoder", "value", "", "serialize", "(Lkotlinx/serialization/encoding/Encoder;Lcom/discord/chat/bridge/activities/ActivityInstanceEmbed;)V", "Lkotlinx/serialization/encoding/Decoder;", "decoder", "deserialize", "(Lkotlinx/serialization/encoding/Decoder;)Lcom/discord/chat/bridge/activities/ActivityInstanceEmbed;", "", "Lkotlinx/serialization/KSerializer;", "childSerializers", "()[Lkotlinx/serialization/KSerializer;", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "descriptor", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "getDescriptor", "()Lkotlinx/serialization/descriptors/SerialDescriptor;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class ActivityInstanceEmbed$$serializer implements h0 {

    @NotNull
    public static final ActivityInstanceEmbed$$serializer INSTANCE;

    @NotNull
    private static final SerialDescriptor descriptor;

    static {
        ActivityInstanceEmbed$$serializer activityInstanceEmbed$$serializer = new ActivityInstanceEmbed$$serializer();
        INSTANCE = activityInstanceEmbed$$serializer;
        j1 j1Var = new j1("com.discord.chat.bridge.activities.ActivityInstanceEmbed", activityInstanceEmbed$$serializer, 5);
        j1Var.k("applicationId", false);
        j1Var.k("instanceId", false);
        j1Var.k("participantAvatarUris", true);
        j1Var.k("appMessageEmbedModel", false);
        j1Var.k("participantsDescription", true);
        descriptor = j1Var;
    }

    private ActivityInstanceEmbed$$serializer() {
    }

    @Override // bs.h0
    @NotNull
    public final KSerializer[] childSerializers() {
        Lazy[] lazyArr;
        lazyArr = ActivityInstanceEmbed.$childSerializers;
        v1 v1Var = v1.a;
        return new KSerializer[]{ApplicationId$$serializer.INSTANCE, v1Var, e.o((KSerializer) lazyArr[2].getValue()), AppMessageEmbedImpl$$serializer.INSTANCE, e.o(v1Var)};
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final ActivityInstanceEmbed deserialize(@NotNull Decoder decoder) {
        Lazy[] lazyArr;
        int i5;
        ApplicationId applicationId;
        String str;
        List list;
        AppMessageEmbedImpl appMessageEmbedImpl;
        String str2;
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeDecoder beginStructure = decoder.beginStructure(serialDescriptor);
        lazyArr = ActivityInstanceEmbed.$childSerializers;
        ApplicationId applicationId2 = null;
        if (beginStructure.decodeSequentially()) {
            ApplicationId applicationId3 = (ApplicationId) beginStructure.decodeSerializableElement(serialDescriptor, 0, ApplicationId$$serializer.INSTANCE, null);
            String decodeStringElement = beginStructure.decodeStringElement(serialDescriptor, 1);
            list = (List) beginStructure.decodeNullableSerializableElement(serialDescriptor, 2, (DeserializationStrategy) lazyArr[2].getValue(), null);
            applicationId = applicationId3;
            appMessageEmbedImpl = (AppMessageEmbedImpl) beginStructure.decodeSerializableElement(serialDescriptor, 3, AppMessageEmbedImpl$$serializer.INSTANCE, null);
            str2 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 4, v1.a, null);
            i5 = 31;
            str = decodeStringElement;
        } else {
            boolean z5 = true;
            int i6 = 0;
            String str3 = null;
            List list2 = null;
            AppMessageEmbedImpl appMessageEmbedImpl2 = null;
            String str4 = null;
            while (z5) {
                int decodeElementIndex = beginStructure.decodeElementIndex(serialDescriptor);
                if (decodeElementIndex == -1) {
                    z5 = false;
                } else if (decodeElementIndex == 0) {
                    applicationId2 = (ApplicationId) beginStructure.decodeSerializableElement(serialDescriptor, 0, ApplicationId$$serializer.INSTANCE, applicationId2);
                    i6 |= 1;
                } else if (decodeElementIndex == 1) {
                    str3 = beginStructure.decodeStringElement(serialDescriptor, 1);
                    i6 |= 2;
                } else if (decodeElementIndex == 2) {
                    list2 = (List) beginStructure.decodeNullableSerializableElement(serialDescriptor, 2, (DeserializationStrategy) lazyArr[2].getValue(), list2);
                    i6 |= 4;
                } else if (decodeElementIndex == 3) {
                    appMessageEmbedImpl2 = (AppMessageEmbedImpl) beginStructure.decodeSerializableElement(serialDescriptor, 3, AppMessageEmbedImpl$$serializer.INSTANCE, appMessageEmbedImpl2);
                    i6 |= 8;
                } else {
                    if (decodeElementIndex != 4) {
                        throw new r(decodeElementIndex);
                    }
                    str4 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 4, v1.a, str4);
                    i6 |= 16;
                }
            }
            i5 = i6;
            applicationId = applicationId2;
            str = str3;
            list = list2;
            appMessageEmbedImpl = appMessageEmbedImpl2;
            str2 = str4;
        }
        beginStructure.endStructure(serialDescriptor);
        return new ActivityInstanceEmbed(i5, applicationId, str, list, appMessageEmbedImpl, str2, null, null);
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final SerialDescriptor getDescriptor() {
        return descriptor;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(@NotNull Encoder encoder, @NotNull ActivityInstanceEmbed value) {
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(value, "value");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeEncoder beginStructure = encoder.beginStructure(serialDescriptor);
        ActivityInstanceEmbed.write$Self$chat_release(value, beginStructure, serialDescriptor);
        beginStructure.endStructure(serialDescriptor);
    }

    @Override // bs.h0
    @NotNull
    public KSerializer[] typeParametersSerializers() {
        return h1.f3190b;
    }
}
