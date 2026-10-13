package com.discord.chat.bridge.contentnode;

import cs.e;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;
import s4.h;

@Metadata(k = 3, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class LinkContextData$LinkContext$Companion$annotationImpl$kotlinx_serialization_json_JsonClassDiscriminator$0 implements e {
    private final /* synthetic */ String discriminator;

    public LinkContextData$LinkContext$Companion$annotationImpl$kotlinx_serialization_json_JsonClassDiscriminator$0(@NotNull String discriminator) {
        Intrinsics.checkNotNullParameter(discriminator, "discriminator");
        this.discriminator = discriminator;
    }

    @Override // java.lang.annotation.Annotation
    public final /* synthetic */ Class annotationType() {
        return e.class;
    }

    @Override // cs.e
    public final /* synthetic */ String discriminator() {
        return this.discriminator;
    }

    @Override // java.lang.annotation.Annotation
    public final boolean equals(Object obj) {
        return (obj instanceof e) && Intrinsics.areEqual(discriminator(), ((e) obj).discriminator());
    }

    @Override // java.lang.annotation.Annotation
    public final int hashCode() {
        return this.discriminator.hashCode() ^ 707790692;
    }

    @Override // java.lang.annotation.Annotation
    @NotNull
    public final String toString() {
        return h.f("@kotlinx.serialization.json.JsonClassDiscriminator(discriminator=", this.discriminator, ")");
    }
}
