package com.discord.simpleast.markdown;

import android.content.Context;
import android.graphics.Color;
import android.text.style.BulletSpan;
import android.text.style.CharacterStyle;
import com.discord.simpleast.core.node.Node;
import com.discord.simpleast.core.node.StyleNode;
import com.discord.simpleast.core.parser.ParseSpec;
import com.discord.simpleast.core.parser.Parser;
import com.discord.simpleast.core.parser.Rule;
import com.discord.simpleast.core.simple.SimpleMarkdownRules;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.regex.Matcher;
import java.util.regex.Pattern;
import kotlin.Metadata;
import kotlin.collections.CollectionsKt;
import kotlin.collections.b0;
import kotlin.collections.c0;
import kotlin.collections.m0;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.Regex;
import kotlin.text.StringsKt;
import org.jetbrains.annotations.NotNull;

@Metadata(bv = {1, 0, 3}, d1 = {"\u00004\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\t\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0002\b\u0006\bÆ\u0002\u0018\u00002\u00020\u0001:\u0004\u0018\u0019\u001a\u001bB\u0007\b\u0002¢\u0006\u0002\u0010\u0002JJ\u0010\r\u001a \u0012\u001c\u0012\u001a\u0012\u0004\u0012\u0002H\u0010\u0012\n\u0012\b\u0012\u0004\u0012\u0002H\u00100\u0011\u0012\u0004\u0012\u0002H\u00120\u000f0\u000e\"\u0004\b\u0000\u0010\u0010\"\u0004\b\u0001\u0010\u00122\u0006\u0010\u0013\u001a\u00020\u00142\u000e\b\u0001\u0010\u0015\u001a\b\u0012\u0004\u0012\u00020\u00160\u000eH\u0007JJ\u0010\u0017\u001a \u0012\u001c\u0012\u001a\u0012\u0004\u0012\u0002H\u0010\u0012\n\u0012\b\u0012\u0004\u0012\u0002H\u00100\u0011\u0012\u0004\u0012\u0002H\u00120\u000f0\u000e\"\u0004\b\u0000\u0010\u0010\"\u0004\b\u0001\u0010\u00122\u0006\u0010\u0013\u001a\u00020\u00142\u000e\b\u0001\u0010\u0015\u001a\b\u0012\u0004\u0012\u00020\u00160\u000eH\u0007R\u0011\u0010\u0003\u001a\u00020\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u0005\u0010\u0006R\u0011\u0010\u0007\u001a\u00020\u0004¢\u0006\b\n\u0000\u001a\u0004\b\b\u0010\u0006R\u0011\u0010\t\u001a\u00020\u0004¢\u0006\b\n\u0000\u001a\u0004\b\n\u0010\u0006R\u0011\u0010\u000b\u001a\u00020\u0004¢\u0006\b\n\u0000\u001a\u0004\b\f\u0010\u0006¨\u0006\u001c"}, d2 = {"Lcom/discord/simpleast/markdown/MarkdownRules;", "", "()V", "PATTERN_HEADER_ITEM", "Ljava/util/regex/Pattern;", "getPATTERN_HEADER_ITEM", "()Ljava/util/regex/Pattern;", "PATTERN_HEADER_ITEM_ALT", "getPATTERN_HEADER_ITEM_ALT", "PATTERN_HEADER_ITEM_ALT_CLASSED", "getPATTERN_HEADER_ITEM_ALT_CLASSED", "PATTERN_LIST_ITEM", "getPATTERN_LIST_ITEM", "createHeaderRules", "", "Lcom/discord/simpleast/core/parser/Rule;", "R", "Lcom/discord/simpleast/core/node/Node;", "S", "context", "Landroid/content/Context;", "headerStyles", "", "createMarkdownRules", "HeaderLineClassedRule", "HeaderLineRule", "HeaderRule", "ListItemRule", "simpleast-core_release"}, k = 1, mv = {1, 4, 0})
/* loaded from: classes.dex */
public final class MarkdownRules {
    public static final MarkdownRules INSTANCE = new MarkdownRules();

    @NotNull
    private static final Pattern PATTERN_HEADER_ITEM;

    @NotNull
    private static final Pattern PATTERN_HEADER_ITEM_ALT;

    @NotNull
    private static final Pattern PATTERN_HEADER_ITEM_ALT_CLASSED;

    @NotNull
    private static final Pattern PATTERN_LIST_ITEM;

    @Metadata(bv = {1, 0, 3}, d1 = {"\u0000N\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0010\b\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0006\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\b\u0016\u0018\u0000*\u0004\b\u0000\u0010\u0001*\b\b\u0001\u0010\u0002*\u00020\u0003*\u0004\b\u0002\u0010\u00042\u000e\u0012\u0004\u0012\u0002H\u0001\u0012\u0004\u0012\u0002H\u00040\u0005B1\b\u0016\u0012\u0012\u0010\u0006\u001a\u000e\u0012\u0004\u0012\u00020\b\u0012\u0004\u0012\u00020\t0\u0007\u0012\u0014\u0010\n\u001a\u0010\u0012\u0004\u0012\u00020\u000b\u0012\u0006\u0012\u0004\u0018\u00018\u00010\u0007¢\u0006\u0002\u0010\fBU\u0012\u0012\u0010\u0006\u001a\u000e\u0012\u0004\u0012\u00020\b\u0012\u0004\u0012\u00020\t0\u0007\u0012\u0014\u0010\n\u001a\u0010\u0012\u0004\u0012\u00020\u000b\u0012\u0006\u0012\u0004\u0018\u00018\u00010\u0007\u0012$\u0010\r\u001a \u0012\u001c\u0012\u001a\u0012\u0004\u0012\u00028\u0000\u0012\n\u0012\b\u0012\u0004\u0012\u00028\u00000\u0010\u0012\u0004\u0012\u00028\u00020\u000f0\u000e¢\u0006\u0002\u0010\u0011JK\u0010\u0016\u001a\u000e\u0012\u0004\u0012\u00028\u0000\u0012\u0004\u0012\u00028\u00020\u00172\u0006\u0010\u0018\u001a\u00020\u00192 \u0010\u001a\u001a\u001c\u0012\u0004\u0012\u00028\u0000\u0012\f\b\u0000\u0012\b\u0012\u0004\u0012\u00028\u00000\u0010\u0012\u0004\u0012\u00028\u00020\u001b2\u0006\u0010\u001c\u001a\u00028\u0002H\u0016¢\u0006\u0002\u0010\u001dR\u001f\u0010\n\u001a\u0010\u0012\u0004\u0012\u00020\u000b\u0012\u0006\u0012\u0004\u0018\u00018\u00010\u0007¢\u0006\b\n\u0000\u001a\u0004\b\u0012\u0010\u0013R2\u0010\r\u001a \u0012\u001c\u0012\u001a\u0012\u0004\u0012\u00028\u0000\u0012\n\u0012\b\u0012\u0004\u0012\u00028\u00000\u0010\u0012\u0004\u0012\u00028\u00020\u000f0\u000eX\u0084\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u0014\u0010\u0015¨\u0006\u001e"}, d2 = {"Lcom/discord/simpleast/markdown/MarkdownRules$HeaderLineClassedRule;", "RC", "T", "", "S", "Lcom/discord/simpleast/markdown/MarkdownRules$HeaderLineRule;", "styleSpanProvider", "Lkotlin/Function1;", "", "Landroid/text/style/CharacterStyle;", "classSpanProvider", "", "(Lkotlin/jvm/functions/Function1;Lkotlin/jvm/functions/Function1;)V", "innerRules", "", "Lcom/discord/simpleast/core/parser/Rule;", "Lcom/discord/simpleast/core/node/Node;", "(Lkotlin/jvm/functions/Function1;Lkotlin/jvm/functions/Function1;Ljava/util/List;)V", "getClassSpanProvider", "()Lkotlin/jvm/functions/Function1;", "getInnerRules", "()Ljava/util/List;", "parse", "Lcom/discord/simpleast/core/parser/ParseSpec;", "matcher", "Ljava/util/regex/Matcher;", "parser", "Lcom/discord/simpleast/core/parser/Parser;", "state", "(Ljava/util/regex/Matcher;Lcom/discord/simpleast/core/parser/Parser;Ljava/lang/Object;)Lcom/discord/simpleast/core/parser/ParseSpec;", "simpleast-core_release"}, k = 1, mv = {1, 4, 0})
    public static class HeaderLineClassedRule<RC, T, S> extends HeaderLineRule<RC, S> {

        @NotNull
        private final Function1<String, T> classSpanProvider;

        @NotNull
        private final List<Rule<RC, Node<RC>, S>> innerRules;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        /* JADX WARN: Multi-variable type inference failed */
        public HeaderLineClassedRule(@NotNull Function1<? super Integer, ? extends CharacterStyle> styleSpanProvider, @NotNull Function1<? super String, ? extends T> classSpanProvider, @NotNull List<? extends Rule<RC, Node<RC>, S>> innerRules) {
            super(MarkdownRules.INSTANCE.getPATTERN_HEADER_ITEM_ALT_CLASSED(), styleSpanProvider);
            Intrinsics.checkNotNullParameter(styleSpanProvider, "styleSpanProvider");
            Intrinsics.checkNotNullParameter(classSpanProvider, "classSpanProvider");
            Intrinsics.checkNotNullParameter(innerRules, "innerRules");
            this.classSpanProvider = classSpanProvider;
            this.innerRules = innerRules;
        }

        @NotNull
        public final Function1<String, T> getClassSpanProvider() {
            return this.classSpanProvider;
        }

        @NotNull
        public final List<Rule<RC, Node<RC>, S>> getInnerRules() {
            return this.innerRules;
        }

        /* JADX WARN: Multi-variable type inference failed */
        /* JADX WARN: Type inference failed for: r6v4, types: [kotlin.collections.m0] */
        /* JADX WARN: Type inference failed for: r6v5, types: [java.util.Collection, java.util.List] */
        /* JADX WARN: Type inference failed for: r6v6, types: [java.util.ArrayList] */
        @Override // com.discord.simpleast.markdown.MarkdownRules.HeaderLineRule, com.discord.simpleast.markdown.MarkdownRules.HeaderRule, com.discord.simpleast.core.parser.Rule
        @NotNull
        public ParseSpec<RC, S> parse(@NotNull Matcher matcher, @NotNull Parser<RC, ? super Node<RC>, S> parser, S state) {
            ?? r62;
            String obj;
            Intrinsics.checkNotNullParameter(matcher, "matcher");
            Intrinsics.checkNotNullParameter(parser, "parser");
            String group = matcher.group(4);
            Intrinsics.checkNotNullExpressionValue(group, "matcher.group(4)");
            StyleNode<RC, CharacterStyle> createHeaderStyleNode = createHeaderStyleNode(group);
            String headerBody = matcher.group(1);
            if (headerBody == null) {
                headerBody = matcher.group(3);
            }
            Intrinsics.checkNotNullExpressionValue(headerBody, "headerBody");
            for (T t5 : parser.parse(headerBody, state, this.innerRules)) {
                if (t5 == null) {
                    throw new NullPointerException("null cannot be cast to non-null type com.discord.simpleast.core.node.Node<RC>");
                }
                createHeaderStyleNode.addChild((Node) t5);
            }
            String group2 = matcher.group(2);
            List S = (group2 == null || (obj = StringsKt.b0(group2).toString()) == null) ? null : StringsKt.S(obj, new char[]{' '});
            if (S != null) {
                r62 = new ArrayList();
                Iterator<T> it = S.iterator();
                while (it.hasNext()) {
                    Object invoke = this.classSpanProvider.invoke((String) it.next());
                    if (invoke != null) {
                        r62.add(invoke);
                    }
                }
            } else {
                r62 = m0.f13512d;
            }
            if (!r62.isEmpty()) {
                StyleNode<RC, CharacterStyle> styleNode = new StyleNode<>(r62);
                styleNode.addChild(createHeaderStyleNode);
                createHeaderStyleNode = styleNode;
            }
            return ParseSpec.INSTANCE.createTerminal(createHeaderStyleNode, state);
        }

        /* JADX WARN: 'this' call moved to the top of the method (can break code semantics) */
        public HeaderLineClassedRule(@NotNull Function1<? super Integer, ? extends CharacterStyle> styleSpanProvider, @NotNull Function1<? super String, ? extends T> classSpanProvider) {
            this(styleSpanProvider, classSpanProvider, CollectionsKt.W(SimpleMarkdownRules.createSimpleMarkdownRules$default(false, false, 2, null), SimpleMarkdownRules.INSTANCE.createTextRule()));
            Intrinsics.checkNotNullParameter(styleSpanProvider, "styleSpanProvider");
            Intrinsics.checkNotNullParameter(classSpanProvider, "classSpanProvider");
        }
    }

    @Metadata(bv = {1, 0, 3}, d1 = {"\u0000H\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0010\b\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\b\u0016\u0018\u0000*\u0004\b\u0000\u0010\u0001*\u0004\b\u0001\u0010\u00022\u000e\u0012\u0004\u0012\u0002H\u0001\u0012\u0004\u0012\u0002H\u00020\u0003B#\u0012\b\b\u0002\u0010\u0004\u001a\u00020\u0005\u0012\u0012\u0010\u0006\u001a\u000e\u0012\u0004\u0012\u00020\b\u0012\u0004\u0012\u00020\t0\u0007¢\u0006\u0002\u0010\nJ\u001c\u0010\u000b\u001a\u000e\u0012\u0004\u0012\u00028\u0000\u0012\u0004\u0012\u00020\t0\f2\u0006\u0010\r\u001a\u00020\u000eH\u0014JK\u0010\u000f\u001a\u000e\u0012\u0004\u0012\u00028\u0000\u0012\u0004\u0012\u00028\u00010\u00102\u0006\u0010\u0011\u001a\u00020\u00122 \u0010\u0013\u001a\u001c\u0012\u0004\u0012\u00028\u0000\u0012\f\b\u0000\u0012\b\u0012\u0004\u0012\u00028\u00000\u0015\u0012\u0004\u0012\u00028\u00010\u00142\u0006\u0010\u0016\u001a\u00028\u0001H\u0016¢\u0006\u0002\u0010\u0017¨\u0006\u0018"}, d2 = {"Lcom/discord/simpleast/markdown/MarkdownRules$HeaderLineRule;", "R", "S", "Lcom/discord/simpleast/markdown/MarkdownRules$HeaderRule;", "pattern", "Ljava/util/regex/Pattern;", "styleSpanProvider", "Lkotlin/Function1;", "", "Landroid/text/style/CharacterStyle;", "(Ljava/util/regex/Pattern;Lkotlin/jvm/functions/Function1;)V", "createHeaderStyleNode", "Lcom/discord/simpleast/core/node/StyleNode;", "headerStyleGroup", "", "parse", "Lcom/discord/simpleast/core/parser/ParseSpec;", "matcher", "Ljava/util/regex/Matcher;", "parser", "Lcom/discord/simpleast/core/parser/Parser;", "Lcom/discord/simpleast/core/node/Node;", "state", "(Ljava/util/regex/Matcher;Lcom/discord/simpleast/core/parser/Parser;Ljava/lang/Object;)Lcom/discord/simpleast/core/parser/ParseSpec;", "simpleast-core_release"}, k = 1, mv = {1, 4, 0})
    public static class HeaderLineRule<R, S> extends HeaderRule<R, S> {
        public /* synthetic */ HeaderLineRule(Pattern pattern, Function1 function1, int i5, DefaultConstructorMarker defaultConstructorMarker) {
            this((i5 & 1) != 0 ? MarkdownRules.INSTANCE.getPATTERN_HEADER_ITEM_ALT() : pattern, function1);
        }

        @Override // com.discord.simpleast.markdown.MarkdownRules.HeaderRule
        @NotNull
        public StyleNode<R, CharacterStyle> createHeaderStyleNode(@NotNull String headerStyleGroup) {
            Intrinsics.checkNotNullParameter(headerStyleGroup, "headerStyleGroup");
            return new StyleNode<>(b0.c(getStyleSpanProvider().invoke(Integer.valueOf((headerStyleGroup.hashCode() == 61 && headerStyleGroup.equals("=")) ? 1 : 2))));
        }

        @Override // com.discord.simpleast.markdown.MarkdownRules.HeaderRule, com.discord.simpleast.core.parser.Rule
        @NotNull
        public ParseSpec<R, S> parse(@NotNull Matcher matcher, @NotNull Parser<R, ? super Node<R>, S> parser, S state) {
            Intrinsics.checkNotNullParameter(matcher, "matcher");
            Intrinsics.checkNotNullParameter(parser, "parser");
            ParseSpec.Companion companion = ParseSpec.INSTANCE;
            String group = matcher.group(2);
            Intrinsics.checkNotNullExpressionValue(group, "matcher.group(2)");
            return companion.createNonterminal(createHeaderStyleNode(group), state, matcher.start(1), matcher.end(1));
        }

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        public HeaderLineRule(@NotNull Pattern pattern, @NotNull Function1<? super Integer, ? extends CharacterStyle> styleSpanProvider) {
            super(pattern, styleSpanProvider);
            Intrinsics.checkNotNullParameter(pattern, "pattern");
            Intrinsics.checkNotNullParameter(styleSpanProvider, "styleSpanProvider");
        }
    }

    @Metadata(bv = {1, 0, 3}, d1 = {"\u0000J\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0010\b\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\b\u0016\u0018\u0000*\u0004\b\u0000\u0010\u0001*\u0004\b\u0001\u0010\u00022\u001a\u0012\u0004\u0012\u0002H\u0001\u0012\n\u0012\b\u0012\u0004\u0012\u0002H\u00010\u0004\u0012\u0004\u0012\u0002H\u00020\u0003B\u001b\b\u0016\u0012\u0012\u0010\u0005\u001a\u000e\u0012\u0004\u0012\u00020\u0007\u0012\u0004\u0012\u00020\b0\u0006¢\u0006\u0002\u0010\tB!\u0012\u0006\u0010\n\u001a\u00020\u000b\u0012\u0012\u0010\u0005\u001a\u000e\u0012\u0004\u0012\u00020\u0007\u0012\u0004\u0012\u00020\b0\u0006¢\u0006\u0002\u0010\fJ\u001c\u0010\u000f\u001a\u000e\u0012\u0004\u0012\u00028\u0000\u0012\u0004\u0012\u00020\b0\u00102\u0006\u0010\u0011\u001a\u00020\u0012H\u0014JK\u0010\u0013\u001a\u000e\u0012\u0004\u0012\u00028\u0000\u0012\u0004\u0012\u00028\u00010\u00142\u0006\u0010\u0015\u001a\u00020\u00162 \u0010\u0017\u001a\u001c\u0012\u0004\u0012\u00028\u0000\u0012\f\b\u0000\u0012\b\u0012\u0004\u0012\u00028\u00000\u0004\u0012\u0004\u0012\u00028\u00010\u00182\u0006\u0010\u0019\u001a\u00028\u0001H\u0016¢\u0006\u0002\u0010\u001aR \u0010\u0005\u001a\u000e\u0012\u0004\u0012\u00020\u0007\u0012\u0004\u0012\u00020\b0\u0006X\u0084\u0004¢\u0006\b\n\u0000\u001a\u0004\b\r\u0010\u000e¨\u0006\u001b"}, d2 = {"Lcom/discord/simpleast/markdown/MarkdownRules$HeaderRule;", "R", "S", "Lcom/discord/simpleast/core/parser/Rule$BlockRule;", "Lcom/discord/simpleast/core/node/Node;", "styleSpanProvider", "Lkotlin/Function1;", "", "Landroid/text/style/CharacterStyle;", "(Lkotlin/jvm/functions/Function1;)V", "pattern", "Ljava/util/regex/Pattern;", "(Ljava/util/regex/Pattern;Lkotlin/jvm/functions/Function1;)V", "getStyleSpanProvider", "()Lkotlin/jvm/functions/Function1;", "createHeaderStyleNode", "Lcom/discord/simpleast/core/node/StyleNode;", "headerStyleGroup", "", "parse", "Lcom/discord/simpleast/core/parser/ParseSpec;", "matcher", "Ljava/util/regex/Matcher;", "parser", "Lcom/discord/simpleast/core/parser/Parser;", "state", "(Ljava/util/regex/Matcher;Lcom/discord/simpleast/core/parser/Parser;Ljava/lang/Object;)Lcom/discord/simpleast/core/parser/ParseSpec;", "simpleast-core_release"}, k = 1, mv = {1, 4, 0})
    public static class HeaderRule<R, S> extends Rule.BlockRule<R, Node<R>, S> {

        @NotNull
        private final Function1<Integer, CharacterStyle> styleSpanProvider;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        /* JADX WARN: Multi-variable type inference failed */
        public HeaderRule(@NotNull Pattern pattern, @NotNull Function1<? super Integer, ? extends CharacterStyle> styleSpanProvider) {
            super(pattern);
            Intrinsics.checkNotNullParameter(pattern, "pattern");
            Intrinsics.checkNotNullParameter(styleSpanProvider, "styleSpanProvider");
            this.styleSpanProvider = styleSpanProvider;
        }

        @NotNull
        public StyleNode<R, CharacterStyle> createHeaderStyleNode(@NotNull String headerStyleGroup) {
            Intrinsics.checkNotNullParameter(headerStyleGroup, "headerStyleGroup");
            return new StyleNode<>(b0.c(this.styleSpanProvider.invoke(Integer.valueOf(headerStyleGroup.length()))));
        }

        @NotNull
        public final Function1<Integer, CharacterStyle> getStyleSpanProvider() {
            return this.styleSpanProvider;
        }

        @Override // com.discord.simpleast.core.parser.Rule
        @NotNull
        public ParseSpec<R, S> parse(@NotNull Matcher matcher, @NotNull Parser<R, ? super Node<R>, S> parser, S state) {
            Intrinsics.checkNotNullParameter(matcher, "matcher");
            Intrinsics.checkNotNullParameter(parser, "parser");
            ParseSpec.Companion companion = ParseSpec.INSTANCE;
            String group = matcher.group(1);
            Intrinsics.checkNotNullExpressionValue(group, "matcher.group(1)");
            return companion.createNonterminal(createHeaderStyleNode(group), state, matcher.start(2), matcher.end(2));
        }

        /* JADX WARN: 'this' call moved to the top of the method (can break code semantics) */
        public HeaderRule(@NotNull Function1<? super Integer, ? extends CharacterStyle> styleSpanProvider) {
            this(MarkdownRules.INSTANCE.getPATTERN_HEADER_ITEM(), styleSpanProvider);
            Intrinsics.checkNotNullParameter(styleSpanProvider, "styleSpanProvider");
        }
    }

    @Metadata(bv = {1, 0, 3}, d1 = {"\u00002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\u0018\u0000*\u0004\b\u0000\u0010\u0001*\u0004\b\u0001\u0010\u00022\u001a\u0012\u0004\u0012\u0002H\u0001\u0012\n\u0012\b\u0012\u0004\u0012\u0002H\u00010\u0004\u0012\u0004\u0012\u0002H\u00020\u0003B\u0013\u0012\f\u0010\u0005\u001a\b\u0012\u0004\u0012\u00020\u00070\u0006¢\u0006\u0002\u0010\bJK\u0010\t\u001a\u000e\u0012\u0004\u0012\u00028\u0000\u0012\u0004\u0012\u00028\u00010\n2\u0006\u0010\u000b\u001a\u00020\f2 \u0010\r\u001a\u001c\u0012\u0004\u0012\u00028\u0000\u0012\f\b\u0000\u0012\b\u0012\u0004\u0012\u00028\u00000\u0004\u0012\u0004\u0012\u00028\u00010\u000e2\u0006\u0010\u000f\u001a\u00028\u0001H\u0016¢\u0006\u0002\u0010\u0010R\u0014\u0010\u0005\u001a\b\u0012\u0004\u0012\u00020\u00070\u0006X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u0011"}, d2 = {"Lcom/discord/simpleast/markdown/MarkdownRules$ListItemRule;", "R", "S", "Lcom/discord/simpleast/core/parser/Rule$BlockRule;", "Lcom/discord/simpleast/core/node/Node;", "bulletSpanProvider", "Lkotlin/Function0;", "Landroid/text/style/BulletSpan;", "(Lkotlin/jvm/functions/Function0;)V", "parse", "Lcom/discord/simpleast/core/parser/ParseSpec;", "matcher", "Ljava/util/regex/Matcher;", "parser", "Lcom/discord/simpleast/core/parser/Parser;", "state", "(Ljava/util/regex/Matcher;Lcom/discord/simpleast/core/parser/Parser;Ljava/lang/Object;)Lcom/discord/simpleast/core/parser/ParseSpec;", "simpleast-core_release"}, k = 1, mv = {1, 4, 0})
    public static final class ListItemRule<R, S> extends Rule.BlockRule<R, Node<R>, S> {
        private final Function0<BulletSpan> bulletSpanProvider;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        /* JADX WARN: Multi-variable type inference failed */
        public ListItemRule(@NotNull Function0<? extends BulletSpan> bulletSpanProvider) {
            super(MarkdownRules.INSTANCE.getPATTERN_LIST_ITEM());
            Intrinsics.checkNotNullParameter(bulletSpanProvider, "bulletSpanProvider");
            this.bulletSpanProvider = bulletSpanProvider;
        }

        @Override // com.discord.simpleast.core.parser.Rule
        @NotNull
        public ParseSpec<R, S> parse(@NotNull Matcher matcher, @NotNull Parser<R, ? super Node<R>, S> parser, S state) {
            Intrinsics.checkNotNullParameter(matcher, "matcher");
            Intrinsics.checkNotNullParameter(parser, "parser");
            return ParseSpec.INSTANCE.createNonterminal(new MarkdownListItemNode(this.bulletSpanProvider), state, matcher.start(1), matcher.end(1));
        }
    }

    static {
        Pattern compile = Pattern.compile("^\\*[ \\t](.*)(?=\\n|$)", 0);
        Intrinsics.checkNotNullExpressionValue(compile, "java.util.regex.Pattern.compile(this, flags)");
        PATTERN_LIST_ITEM = compile;
        Pattern compile2 = Pattern.compile("^\\s*(#+)[ \\t](.*) *(?=\\n|$)", 0);
        Intrinsics.checkNotNullExpressionValue(compile2, "java.util.regex.Pattern.compile(this, flags)");
        PATTERN_HEADER_ITEM = compile2;
        Pattern compile3 = Pattern.compile("^\\s*(.+)\\n *(=|-){3,} *(?=\\n|$)", 0);
        Intrinsics.checkNotNullExpressionValue(compile3, "java.util.regex.Pattern.compile(this, flags)");
        PATTERN_HEADER_ITEM_ALT = compile3;
        PATTERN_HEADER_ITEM_ALT_CLASSED = new Regex("^\\s*(?:(?:(.+)(?: +\\{([\\w ]*)\\}))|(.*))[ \\t]*\\n *([=\\-]){3,}[ \\t]*(?=\\n|$)").f13560d;
    }

    private MarkdownRules() {
    }

    /* JADX WARN: Multi-variable type inference failed */
    @NotNull
    public static final <R, S> List<Rule<R, Node<R>, S>> createHeaderRules(@NotNull Context context, @NotNull List<Integer> headerStyles) {
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(headerStyles, "headerStyles");
        MarkdownRules$createHeaderRules$1 markdownRules$createHeaderRules$1 = new MarkdownRules$createHeaderRules$1(context, headerStyles);
        return c0.g(new HeaderRule(new MarkdownRules$createHeaderRules$2(markdownRules$createHeaderRules$1)), new HeaderLineRule(null, new MarkdownRules$createHeaderRules$3(markdownRules$createHeaderRules$1), 1, 0 == true ? 1 : 0));
    }

    @NotNull
    public static final <R, S> List<Rule<R, Node<R>, S>> createMarkdownRules(@NotNull Context context, @NotNull List<Integer> headerStyles) {
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(headerStyles, "headerStyles");
        return CollectionsKt.W(createHeaderRules(context, headerStyles), new ListItemRule(new Function0<BulletSpan>() { // from class: com.discord.simpleast.markdown.MarkdownRules$createMarkdownRules$1
            @Override // kotlin.jvm.functions.Function0
            @NotNull
            public final BulletSpan invoke() {
                return new BulletSpan(24, Color.parseColor("#6E7B7F"));
            }
        }));
    }

    @NotNull
    public final Pattern getPATTERN_HEADER_ITEM() {
        return PATTERN_HEADER_ITEM;
    }

    @NotNull
    public final Pattern getPATTERN_HEADER_ITEM_ALT() {
        return PATTERN_HEADER_ITEM_ALT;
    }

    @NotNull
    public final Pattern getPATTERN_HEADER_ITEM_ALT_CLASSED() {
        return PATTERN_HEADER_ITEM_ALT_CLASSED;
    }

    @NotNull
    public final Pattern getPATTERN_LIST_ITEM() {
        return PATTERN_LIST_ITEM;
    }
}
