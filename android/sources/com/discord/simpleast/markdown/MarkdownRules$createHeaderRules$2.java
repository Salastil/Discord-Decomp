package com.discord.simpleast.markdown;

import android.text.style.CharacterStyle;
import kotlin.Metadata;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.FunctionReferenceImpl;
import org.jetbrains.annotations.NotNull;

@Metadata(bv = {1, 0, 3}, d1 = {"\u0000\u0010\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\b\n\u0000\u0010\u0000\u001a\u00020\u0001\"\u0004\b\u0000\u0010\u0002\"\u0004\b\u0001\u0010\u00032\u0006\u0010\u0004\u001a\u00020\u0005¢\u0006\u0002\b\u0006"}, d2 = {"<anonymous>", "Landroid/text/style/CharacterStyle;", "R", "S", "p1", "", "invoke"}, k = 3, mv = {1, 4, 0})
/* loaded from: classes.dex */
public final /* synthetic */ class MarkdownRules$createHeaderRules$2 extends FunctionReferenceImpl implements Function1<Integer, CharacterStyle> {
    final /* synthetic */ MarkdownRules$createHeaderRules$1 $spanProvider$1;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public MarkdownRules$createHeaderRules$2(MarkdownRules$createHeaderRules$1 markdownRules$createHeaderRules$1) {
        super(1, null, "spanProvider", "invoke(I)Landroid/text/style/CharacterStyle;", 0);
        this.$spanProvider$1 = markdownRules$createHeaderRules$1;
    }

    @Override // kotlin.jvm.functions.Function1
    public /* bridge */ /* synthetic */ Object invoke(Object obj) {
        return invoke(((Number) obj).intValue());
    }

    @NotNull
    public final CharacterStyle invoke(int i5) {
        return this.$spanProvider$1.invoke(i5);
    }
}
