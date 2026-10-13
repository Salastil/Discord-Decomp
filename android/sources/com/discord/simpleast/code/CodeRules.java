package com.discord.simpleast.code;

import com.discord.simpleast.code.CodeNode;
import com.discord.simpleast.core.node.Node;
import com.discord.simpleast.core.node.StyleNode;
import com.discord.simpleast.core.node.TextNode;
import com.discord.simpleast.core.parser.ParseSpec;
import com.discord.simpleast.core.parser.Parser;
import com.discord.simpleast.core.parser.Rule;
import java.util.Arrays;
import java.util.List;
import java.util.Map;
import java.util.regex.Matcher;
import java.util.regex.Pattern;
import kotlin.Metadata;
import kotlin.Pair;
import kotlin.collections.CollectionsKt;
import kotlin.collections.c0;
import kotlin.collections.v0;
import kotlin.collections.x;
import kotlin.jvm.functions.Function3;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.StringsKt;
import org.jetbrains.annotations.NotNull;

@Metadata(bv = {1, 0, 3}, d1 = {"\u0000e\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u000b\n\u0002\u0010$\n\u0002\u0010\u000e\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0010\u0011\n\u0002\b\u0012\n\u0002\b\u0006*\u0001:\bÆ\u0002\u0018\u00002\u00020\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002JJ\u0010\u0013\u001a,\u0012\u0004\u0012\u00020\u0015\u0012\"\u0012 \u0012\u001c\u0012\u001a\u0012\u0004\u0012\u0002H\u0018\u0012\n\u0012\b\u0012\u0004\u0012\u0002H\u00180\u0019\u0012\u0004\u0012\u0002H\u001a0\u00170\u00160\u0014\"\u0004\b\u0000\u0010\u0018\"\u0004\b\u0001\u0010\u001a2\f\u0010\u001b\u001a\b\u0012\u0004\u0012\u0002H\u00180\u001cJ\u0098\u0001\u0010\u001d\u001a\u001a\u0012\u0004\u0012\u0002H\u0018\u0012\n\u0012\b\u0012\u0004\u0012\u0002H\u00180\u0019\u0012\u0004\u0012\u0002H\u001a0\u0017\"\u0004\b\u0000\u0010\u0018\"\u0004\b\u0001\u0010\u001a2\f\u0010\u001e\u001a\b\u0012\u0004\u0012\u0002H\u00180\u001f20\u0010 \u001a,\u0012\u0004\u0012\u00020\u0015\u0012\"\u0012 \u0012\u001c\u0012\u001a\u0012\u0004\u0012\u0002H\u0018\u0012\n\u0012\b\u0012\u0004\u0012\u0002H\u00180\u0019\u0012\u0004\u0012\u0002H\u001a0\u00170\u00160\u00142,\b\u0002\u0010!\u001a&\u0012\n\u0012\b\u0012\u0004\u0012\u0002H\u00180#\u0012\u0004\u0012\u00020$\u0012\u0004\u0012\u0002H\u001a\u0012\n\u0012\b\u0012\u0004\u0012\u0002H\u00180\u00190\"JQ\u0010%\u001a\u001a\u0012\u0004\u0012\u0002H\u0018\u0012\n\u0012\b\u0012\u0004\u0012\u0002H\u00180\u0019\u0012\u0004\u0012\u0002H\u001a0\u0017\"\u0004\b\u0000\u0010\u0018\"\u0004\b\u0001\u0010\u001a2\f\u0010\u001b\u001a\b\u0012\u0004\u0012\u0002H\u00180\u001c2\u0012\u0010&\u001a\n\u0012\u0006\b\u0001\u0012\u00020\u00150'\"\u00020\u0015¢\u0006\u0002\u0010(J¥\u0001\u0010)\u001a \u0012\u001c\u0012\u001a\u0012\u0004\u0012\u0002H\u0018\u0012\n\u0012\b\u0012\u0004\u0012\u0002H\u00180\u0019\u0012\u0004\u0012\u0002H\u001a0\u00170\u0016\"\u0004\b\u0000\u0010\u0018\"\u0004\b\u0001\u0010\u001a2\f\u0010\u001b\u001a\b\u0012\u0004\u0012\u0002H\u00180\u001c2$\u0010*\u001a \u0012\u001c\u0012\u001a\u0012\u0004\u0012\u0002H\u0018\u0012\n\u0012\b\u0012\u0004\u0012\u0002H\u00180\u0019\u0012\u0004\u0012\u0002H\u001a0\u00170\u00162\f\u0010+\u001a\b\u0012\u0004\u0012\u00020\u00150'2\f\u0010,\u001a\b\u0012\u0004\u0012\u00020\u00150'2\f\u0010-\u001a\b\u0012\u0004\u0012\u00020\u00150'2\u000e\b\u0002\u0010.\u001a\b\u0012\u0004\u0012\u00020\u00150'H\u0002¢\u0006\u0002\u0010/JF\u00100\u001a\u001a\u0012\u0004\u0012\u0002H\u0018\u0012\n\u0012\b\u0012\u0004\u0012\u0002H\u00180\u0019\u0012\u0004\u0012\u0002H\u001a0\u0017\"\u0004\b\u0000\u0010\u0018\"\u0004\b\u0001\u0010\u001a2\f\u0010\u001e\u001a\b\u0012\u0004\u0012\u0002H\u00180\u001f2\f\u00101\u001a\b\u0012\u0004\u0012\u0002H\u00180\u001fJ\u0018\u00102\u001a\n 3*\u0004\u0018\u00010\b0\b2\u0006\u00104\u001a\u00020\u0015H\u0002J+\u00105\u001a\n 3*\u0004\u0018\u00010\b0\b2\u0012\u00106\u001a\n\u0012\u0006\b\u0001\u0012\u00020\u00150'\"\u00020\u0015H\u0000¢\u0006\u0004\b7\u00108JE\u00109\u001a\u000e\u0012\u0004\u0012\u0002H\u0018\u0012\u0004\u0012\u0002H\u001a0:\"\u0004\b\u0000\u0010\u0018\"\u0004\b\u0001\u0010\u001a*\u00020\b2\b\b\u0002\u0010;\u001a\u00020\u00042\u0010\b\u0002\u0010<\u001a\n\u0012\u0004\u0012\u0002H\u0018\u0018\u00010\u001fH\u0002¢\u0006\u0002\u0010=JJ\u0010>\u001a\u001a\u0012\u0004\u0012\u0002H\u0018\u0012\n\u0012\b\u0012\u0004\u0012\u0002H\u00180\u0019\u0012\u0004\u0012\u0002H\u001a0\u0017\"\u0004\b\u0000\u0010\u0018\"\u0004\b\u0001\u0010\u001a*\u00020\b2\b\b\u0002\u0010;\u001a\u00020\u00042\u0010\b\u0002\u0010<\u001a\n\u0012\u0004\u0012\u0002H\u0018\u0018\u00010\u001fR\u000e\u0010\u0003\u001a\u00020\u0004X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u0005\u001a\u00020\u0004X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0004X\u0082T¢\u0006\u0002\n\u0000R\u0011\u0010\u0007\u001a\u00020\b¢\u0006\b\n\u0000\u001a\u0004\b\t\u0010\nR\u0011\u0010\u000b\u001a\u00020\b¢\u0006\b\n\u0000\u001a\u0004\b\f\u0010\nR\u0011\u0010\r\u001a\u00020\b¢\u0006\b\n\u0000\u001a\u0004\b\u000e\u0010\nR\u0011\u0010\u000f\u001a\u00020\b¢\u0006\b\n\u0000\u001a\u0004\b\u0010\u0010\nR\u0011\u0010\u0011\u001a\u00020\b¢\u0006\b\n\u0000\u001a\u0004\b\u0012\u0010\n¨\u0006?"}, d2 = {"Lcom/discord/simpleast/code/CodeRules;", "", "()V", "CODE_BLOCK_BODY_GROUP", "", "CODE_BLOCK_LANGUAGE_GROUP", "CODE_BLOCK_WS_PREFIX", "PATTERN_CODE_BLOCK", "Ljava/util/regex/Pattern;", "getPATTERN_CODE_BLOCK", "()Ljava/util/regex/Pattern;", "PATTERN_CODE_INLINE", "getPATTERN_CODE_INLINE", "PATTERN_LEADING_WS_CONSUMER", "getPATTERN_LEADING_WS_CONSUMER", "PATTERN_NUMBERS", "getPATTERN_NUMBERS", "PATTERN_TEXT", "getPATTERN_TEXT", "createCodeLanguageMap", "", "", "", "Lcom/discord/simpleast/core/parser/Rule;", "R", "Lcom/discord/simpleast/core/node/Node;", "S", "codeStyleProviders", "Lcom/discord/simpleast/code/CodeStyleProviders;", "createCodeRule", "textStyleProvider", "Lcom/discord/simpleast/core/node/StyleNode$SpanProvider;", "languageMap", "wrapperNodeProvider", "Lkotlin/Function3;", "Lcom/discord/simpleast/code/CodeNode;", "", "createDefinitionRule", "identifiers", "", "(Lcom/discord/simpleast/code/CodeStyleProviders;[Ljava/lang/String;)Lcom/discord/simpleast/core/parser/Rule;", "createGenericCodeRules", "additionalRules", "definitions", "builtIns", "keywords", "types", "(Lcom/discord/simpleast/code/CodeStyleProviders;Ljava/util/List;[Ljava/lang/String;[Ljava/lang/String;[Ljava/lang/String;[Ljava/lang/String;)Ljava/util/List;", "createInlineCodeRule", "bgStyleProvider", "createSingleLineCommentPattern", "kotlin.jvm.PlatformType", "prefix", "createWordPattern", "words", "createWordPattern$simpleast_core_release", "([Ljava/lang/String;)Ljava/util/regex/Pattern;", "toLineStartMatchGroupRule", "com/discord/simpleast/code/CodeRules$toLineStartMatchGroupRule$1", "group", "stylesProvider", "(Ljava/util/regex/Pattern;ILcom/discord/simpleast/core/node/StyleNode$SpanProvider;)Lcom/discord/simpleast/code/CodeRules$toLineStartMatchGroupRule$1;", "toMatchGroupRule", "simpleast-core_release"}, k = 1, mv = {1, 4, 0})
/* loaded from: classes.dex */
public final class CodeRules {
    private static final int CODE_BLOCK_BODY_GROUP = 3;
    private static final int CODE_BLOCK_LANGUAGE_GROUP = 1;
    private static final int CODE_BLOCK_WS_PREFIX = 2;
    public static final CodeRules INSTANCE = new CodeRules();

    @NotNull
    private static final Pattern PATTERN_CODE_BLOCK;

    @NotNull
    private static final Pattern PATTERN_CODE_INLINE;

    @NotNull
    private static final Pattern PATTERN_LEADING_WS_CONSUMER;

    @NotNull
    private static final Pattern PATTERN_NUMBERS;

    @NotNull
    private static final Pattern PATTERN_TEXT;

    static {
        Pattern compile = Pattern.compile("^```(?:([\\w+\\-.]+?)?(\\s*\\n))?([^\\n].*?)\\n*```", 32);
        Intrinsics.checkNotNullExpressionValue(compile, "Pattern.compile(\"\"\"^```(…n*```\"\"\", Pattern.DOTALL)");
        PATTERN_CODE_BLOCK = compile;
        Pattern compile2 = Pattern.compile("^(``?)([^`]*)\\1", 32);
        Intrinsics.checkNotNullExpressionValue(compile2, "Pattern.compile(\"\"\"^(``?…]*)\\1\"\"\", Pattern.DOTALL)");
        PATTERN_CODE_INLINE = compile2;
        Pattern compile3 = Pattern.compile("^(?:\\n\\s*)+");
        Intrinsics.checkNotNullExpressionValue(compile3, "Pattern.compile(\"\"\"^(?:\\n\\s*)+\"\"\")");
        PATTERN_LEADING_WS_CONSUMER = compile3;
        Pattern compile4 = Pattern.compile("^[\\s\\S]+?(?=\\b|[^0-9A-Za-z\\s\\u00c0-\\uffff]|\\n| {2,}\\n|\\w+:\\S|$)");
        Intrinsics.checkNotNullExpressionValue(compile4, "Pattern.compile(\"\"\"^[\\s\\…|\\n| {2,}\\n|\\w+:\\S|$)\"\"\")");
        PATTERN_TEXT = compile4;
        Pattern compile5 = Pattern.compile("^\\b\\d+?\\b");
        Intrinsics.checkNotNullExpressionValue(compile5, "Pattern.compile(\"\"\"^\\b\\d+?\\b\"\"\")");
        PATTERN_NUMBERS = compile5;
    }

    private CodeRules() {
    }

    public static /* synthetic */ Rule createCodeRule$default(CodeRules codeRules, StyleNode.SpanProvider spanProvider, Map map, Function3 function3, int i5, Object obj) {
        if ((i5 & 4) != 0) {
            function3 = new Function3() { // from class: com.discord.simpleast.code.CodeRules$createCodeRule$1
                @NotNull
                public final CodeNode invoke(@NotNull CodeNode codeNode, boolean z5, Object obj2) {
                    Intrinsics.checkNotNullParameter(codeNode, "codeNode");
                    return codeNode;
                }

                @Override // kotlin.jvm.functions.Function3
                public /* bridge */ /* synthetic */ Object invoke(Object obj2, Object obj3, Object obj4) {
                    return invoke((CodeNode) obj2, ((Boolean) obj3).booleanValue(), obj4);
                }
            };
        }
        return codeRules.createCodeRule(spanProvider, map, function3);
    }

    private final <R, S> List<Rule<R, Node<R>, S>> createGenericCodeRules(CodeStyleProviders<R> codeStyleProviders, List<? extends Rule<R, Node<R>, S>> additionalRules, String[] definitions, String[] builtIns, String[] keywords, String[] types) {
        Rule<R, Node<R>, S> createDefinitionRule = createDefinitionRule(codeStyleProviders, (String[]) Arrays.copyOf(definitions, definitions.length));
        Pattern createWordPattern$simpleast_core_release = createWordPattern$simpleast_core_release((String[]) Arrays.copyOf(builtIns, builtIns.length));
        Intrinsics.checkNotNullExpressionValue(createWordPattern$simpleast_core_release, "createWordPattern(*builtIns)");
        Rule matchGroupRule$default = toMatchGroupRule$default(this, createWordPattern$simpleast_core_release, 0, codeStyleProviders.getGenericsStyleProvider(), 1, null);
        Pattern createWordPattern$simpleast_core_release2 = createWordPattern$simpleast_core_release((String[]) Arrays.copyOf(keywords, keywords.length));
        Intrinsics.checkNotNullExpressionValue(createWordPattern$simpleast_core_release2, "createWordPattern(*keywords)");
        Rule matchGroupRule$default2 = toMatchGroupRule$default(this, createWordPattern$simpleast_core_release2, 0, codeStyleProviders.getKeywordStyleProvider(), 1, null);
        Pattern createWordPattern$simpleast_core_release3 = createWordPattern$simpleast_core_release((String[]) Arrays.copyOf(types, types.length));
        Intrinsics.checkNotNullExpressionValue(createWordPattern$simpleast_core_release3, "createWordPattern(*types)");
        return CollectionsKt.V(additionalRules, c0.g(createDefinitionRule, matchGroupRule$default, matchGroupRule$default2, toMatchGroupRule$default(this, createWordPattern$simpleast_core_release3, 0, codeStyleProviders.getTypesStyleProvider(), 1, null), toMatchGroupRule$default(this, PATTERN_NUMBERS, 0, codeStyleProviders.getLiteralStyleProvider(), 1, null), toMatchGroupRule$default(this, PATTERN_LEADING_WS_CONSUMER, 0, null, 3, null), toMatchGroupRule$default(this, PATTERN_TEXT, 0, null, 3, null)));
    }

    public static /* synthetic */ List createGenericCodeRules$default(CodeRules codeRules, CodeStyleProviders codeStyleProviders, List list, String[] strArr, String[] strArr2, String[] strArr3, String[] strArr4, int i5, Object obj) {
        if ((i5 & 32) != 0) {
            strArr4 = new String[]{" "};
        }
        return codeRules.createGenericCodeRules(codeStyleProviders, list, strArr, strArr2, strArr3, strArr4);
    }

    private final Pattern createSingleLineCommentPattern(String prefix) {
        return Pattern.compile("^(?:" + prefix + ".*?(?=\\n|$))");
    }

    private final <R, S> CodeRules$toLineStartMatchGroupRule$1 toLineStartMatchGroupRule(final Pattern pattern, final int i5, final StyleNode.SpanProvider<R> spanProvider) {
        return new Rule.BlockRule<R, Node<R>, S>(pattern) { // from class: com.discord.simpleast.code.CodeRules$toLineStartMatchGroupRule$1
            @Override // com.discord.simpleast.core.parser.Rule
            @NotNull
            public ParseSpec<R, S> parse(@NotNull Matcher matcher, @NotNull Parser<R, ? super Node<R>, S> parser, S state) {
                Intrinsics.checkNotNullParameter(matcher, "matcher");
                Intrinsics.checkNotNullParameter(parser, "parser");
                String group = matcher.group(i5);
                if (group == null) {
                    group = "";
                }
                StyleNode.SpanProvider spanProvider2 = spanProvider;
                return ParseSpec.INSTANCE.createTerminal(spanProvider2 != null ? new StyleNode.TextStyledNode<>(group, spanProvider2) : new TextNode<>(group), state);
            }
        };
    }

    public static /* synthetic */ CodeRules$toLineStartMatchGroupRule$1 toLineStartMatchGroupRule$default(CodeRules codeRules, Pattern pattern, int i5, StyleNode.SpanProvider spanProvider, int i6, Object obj) {
        if ((i6 & 1) != 0) {
            i5 = 0;
        }
        if ((i6 & 2) != 0) {
            spanProvider = null;
        }
        return codeRules.toLineStartMatchGroupRule(pattern, i5, spanProvider);
    }

    public static /* synthetic */ Rule toMatchGroupRule$default(CodeRules codeRules, Pattern pattern, int i5, StyleNode.SpanProvider spanProvider, int i6, Object obj) {
        if ((i6 & 1) != 0) {
            i5 = 0;
        }
        if ((i6 & 2) != 0) {
            spanProvider = null;
        }
        return codeRules.toMatchGroupRule(pattern, i5, spanProvider);
    }

    @NotNull
    public final <R, S> Map<String, List<Rule<R, Node<R>, S>>> createCodeLanguageMap(@NotNull CodeStyleProviders<R> codeStyleProviders) {
        Intrinsics.checkNotNullParameter(codeStyleProviders, "codeStyleProviders");
        Kotlin kotlin2 = Kotlin.INSTANCE;
        List createGenericCodeRules$default = createGenericCodeRules$default(this, codeStyleProviders, kotlin2.createKotlinCodeRules$simpleast_core_release(codeStyleProviders), new String[]{"object", "class", "interface"}, kotlin2.getBUILT_INS(), kotlin2.getKEYWORDS(), null, 32, null);
        Pattern createSingleLineCommentPattern = createSingleLineCommentPattern("//");
        Intrinsics.checkNotNullExpressionValue(createSingleLineCommentPattern, "createSingleLineCommentPattern(\"//\")");
        Rule matchGroupRule$default = toMatchGroupRule$default(this, createSingleLineCommentPattern, 0, codeStyleProviders.getCommentStyleProvider(), 1, null);
        Pattern compile = Pattern.compile("^\"[\\s\\S]*?(?<!\\\\)\"(?=\\W|\\s|$)");
        Intrinsics.checkNotNullExpressionValue(compile, "Pattern.compile(\"\"\"^\"[\\s…*?(?<!\\\\)\"(?=\\W|\\s|$)\"\"\")");
        List createGenericCodeRules$default2 = createGenericCodeRules$default(this, codeStyleProviders, c0.g(matchGroupRule$default, toMatchGroupRule$default(this, compile, 0, codeStyleProviders.getLiteralStyleProvider(), 1, null)), new String[]{"message|enum|extend|service"}, new String[]{"true|false", "string|bool|double|float|bytes", "int32|uint32|sint32|int64|unit64|sint64", "map"}, new String[]{"required|repeated|optional|option|oneof|default|reserved", "package|import", "rpc|returns"}, null, 32, null);
        Pattern createSingleLineCommentPattern2 = createSingleLineCommentPattern("#");
        Intrinsics.checkNotNullExpressionValue(createSingleLineCommentPattern2, "createSingleLineCommentPattern(\"#\")");
        Rule matchGroupRule$default2 = toMatchGroupRule$default(this, createSingleLineCommentPattern2, 0, codeStyleProviders.getCommentStyleProvider(), 1, null);
        Pattern compile2 = Pattern.compile("^\"[\\s\\S]*?(?<!\\\\)\"(?=\\W|\\s|$)");
        Intrinsics.checkNotNullExpressionValue(compile2, "Pattern.compile(\"\"\"^\"[\\s…*?(?<!\\\\)\"(?=\\W|\\s|$)\"\"\")");
        Rule matchGroupRule$default3 = toMatchGroupRule$default(this, compile2, 0, codeStyleProviders.getLiteralStyleProvider(), 1, null);
        Pattern compile3 = Pattern.compile("^'[\\s\\S]*?(?<!\\\\)'(?=\\W|\\s|$)");
        Intrinsics.checkNotNullExpressionValue(compile3, "Pattern.compile(\"\"\"^'[\\s…*?(?<!\\\\)'(?=\\W|\\s|$)\"\"\")");
        Rule matchGroupRule$default4 = toMatchGroupRule$default(this, compile3, 0, codeStyleProviders.getLiteralStyleProvider(), 1, null);
        Pattern compile4 = Pattern.compile("^@(\\w+)");
        Intrinsics.checkNotNullExpressionValue(compile4, "Pattern.compile(\"\"\"^@(\\w+)\"\"\")");
        List createGenericCodeRules$default3 = createGenericCodeRules$default(this, codeStyleProviders, c0.g(matchGroupRule$default2, matchGroupRule$default3, matchGroupRule$default4, toMatchGroupRule$default(this, compile4, 0, codeStyleProviders.getGenericsStyleProvider(), 1, null)), new String[]{"class", "def", "lambda"}, new String[]{"True|False|None"}, new String[]{"from|import|global|nonlocal", "async|await|class|self|cls|def|lambda", "for|while|if|else|elif|break|continue|return", "try|except|finally|raise|pass|yeild", "in|as|is|del", "and|or|not|assert"}, null, 32, null);
        Pattern createSingleLineCommentPattern3 = createSingleLineCommentPattern("//");
        Intrinsics.checkNotNullExpressionValue(createSingleLineCommentPattern3, "createSingleLineCommentPattern(\"//\")");
        Rule matchGroupRule$default5 = toMatchGroupRule$default(this, createSingleLineCommentPattern3, 0, codeStyleProviders.getCommentStyleProvider(), 1, null);
        Pattern compile5 = Pattern.compile("^\"[\\s\\S]*?(?<!\\\\)\"(?=\\W|\\s|$)");
        Intrinsics.checkNotNullExpressionValue(compile5, "Pattern.compile(\"\"\"^\"[\\s…*?(?<!\\\\)\"(?=\\W|\\s|$)\"\"\")");
        Rule matchGroupRule$default6 = toMatchGroupRule$default(this, compile5, 0, codeStyleProviders.getLiteralStyleProvider(), 1, null);
        Pattern compile6 = Pattern.compile("^#!?\\[.*?\\]\\n");
        Intrinsics.checkNotNullExpressionValue(compile6, "Pattern.compile(\"\"\"^#!?\\[.*?\\]\\n\"\"\")");
        List createGenericCodeRules$default4 = createGenericCodeRules$default(this, codeStyleProviders, c0.g(matchGroupRule$default5, matchGroupRule$default6, toMatchGroupRule$default(this, compile6, 0, codeStyleProviders.getGenericsStyleProvider(), 1, null)), new String[]{"struct", "trait", "mod"}, new String[]{"Self|Result|Ok|Err|Option|None|Some", "Copy|Clone|Eq|Hash|Send|Sync|Sized|Debug|Display", "Arc|Rc|Box|Pin|Future", "true|false|bool|usize|i64|u64|u32|i32|str|String"}, new String[]{"let|mut|static|const|unsafe", "crate|mod|extern|pub|pub(super)|use", "struct|enum|trait|type|where|impl|dyn|async|await|move|self|fn", "for|while|loop|if|else|match|break|continue|return|try", "in|as|ref"}, null, 32, null);
        Xml xml = Xml.INSTANCE;
        Rule matchGroupRule$default7 = toMatchGroupRule$default(this, xml.getPATTERN_XML_COMMENT(), 0, codeStyleProviders.getCommentStyleProvider(), 1, null);
        Rule createTagRule = xml.createTagRule(codeStyleProviders);
        Pattern pattern = PATTERN_LEADING_WS_CONSUMER;
        Rule matchGroupRule$default8 = toMatchGroupRule$default(this, pattern, 0, null, 3, null);
        Pattern pattern2 = PATTERN_TEXT;
        List g6 = c0.g(matchGroupRule$default7, createTagRule, matchGroupRule$default8, toMatchGroupRule$default(this, pattern2, 0, null, 3, null));
        Pattern createSingleLineCommentPattern4 = createSingleLineCommentPattern("#");
        Intrinsics.checkNotNullExpressionValue(createSingleLineCommentPattern4, "createSingleLineCommentPattern(\"#\")");
        Rule matchGroupRule$default9 = toMatchGroupRule$default(this, createSingleLineCommentPattern4, 0, codeStyleProviders.getCommentStyleProvider(), 1, null);
        Pattern compile7 = Pattern.compile("^\"[\\s\\S]*?(?<!\\\\)\"(?=\\W|\\s|$)");
        Intrinsics.checkNotNullExpressionValue(compile7, "Pattern.compile(\"\"\"^\"[\\s…*?(?<!\\\\)\"(?=\\W|\\s|$)\"\"\")");
        Rule matchGroupRule$default10 = toMatchGroupRule$default(this, compile7, 0, codeStyleProviders.getLiteralStyleProvider(), 1, null);
        String pattern3 = createWordPattern$simpleast_core_release("true|false|null").pattern();
        Intrinsics.checkNotNullExpressionValue(pattern3, "createWordPattern(\"true|false|null\").pattern()");
        Pattern compile8 = Pattern.compile(pattern3, 2);
        Intrinsics.checkNotNullExpressionValue(compile8, "java.util.regex.Pattern.compile(this, flags)");
        Rule matchGroupRule$default11 = toMatchGroupRule$default(this, compile8, 0, codeStyleProviders.getGenericsStyleProvider(), 1, null);
        String pattern4 = createWordPattern$simpleast_core_release("select|from|join|where|and|as|distinct|count|avg", "order by|group by|desc|sum|min|max", "like|having|in|is|not").pattern();
        Intrinsics.checkNotNullExpressionValue(pattern4, "createWordPattern(\n     …ing|in|is|not\").pattern()");
        Pattern compile9 = Pattern.compile(pattern4, 2);
        Intrinsics.checkNotNullExpressionValue(compile9, "java.util.regex.Pattern.compile(this, flags)");
        List g10 = c0.g(matchGroupRule$default9, matchGroupRule$default10, matchGroupRule$default11, toMatchGroupRule$default(this, compile9, 0, codeStyleProviders.getKeywordStyleProvider(), 1, null), toMatchGroupRule$default(this, PATTERN_NUMBERS, 0, codeStyleProviders.getLiteralStyleProvider(), 1, null), toMatchGroupRule$default(this, pattern, 0, null, 3, null), toMatchGroupRule$default(this, pattern2, 0, null, 3, null));
        Crystal crystal = Crystal.INSTANCE;
        List createGenericCodeRules$default5 = createGenericCodeRules$default(this, codeStyleProviders, crystal.createCrystalCodeRules$simpleast_core_release(codeStyleProviders), new String[]{"def", "class"}, crystal.getBUILT_INS(), crystal.getKEYWORDS(), null, 32, null);
        JavaScript javaScript = JavaScript.INSTANCE;
        List createGenericCodeRules$default6 = createGenericCodeRules$default(this, codeStyleProviders, javaScript.createCodeRules$simpleast_core_release(codeStyleProviders), new String[]{"class"}, javaScript.getBUILT_INS(), javaScript.getKEYWORDS(), null, 32, null);
        TypeScript typeScript = TypeScript.INSTANCE;
        List<Rule<R, Node<R>, S>> createGenericCodeRules = createGenericCodeRules(codeStyleProviders, typeScript.createCodeRules$simpleast_core_release(codeStyleProviders), new String[]{"class", "interface", "enum", "namespace", "module", "type"}, typeScript.getBUILT_INS(), typeScript.getKEYWORDS(), typeScript.getTYPES());
        Pattern compile10 = Pattern.compile("^-.*");
        Intrinsics.checkNotNullExpressionValue(compile10, "Pattern.compile(\"\"\"^-.*\"\"\")");
        CodeRules$toLineStartMatchGroupRule$1 lineStartMatchGroupRule$default = toLineStartMatchGroupRule$default(this, compile10, 0, codeStyleProviders.getDeletionStyleProvider(), 1, null);
        Pattern compile11 = Pattern.compile("^\\+.*");
        Intrinsics.checkNotNullExpressionValue(compile11, "Pattern.compile(\"\"\"^\\+.*\"\"\")");
        List g11 = c0.g(lineStartMatchGroupRule$default, toLineStartMatchGroupRule$default(this, compile11, 0, codeStyleProviders.getAdditionStyleProvider(), 1, null), toMatchGroupRule$default(this, pattern, 0, null, 3, null), toMatchGroupRule$default(this, pattern2, 0, null, 3, null));
        return v0.g(new Pair("kt", createGenericCodeRules$default), new Pair("kts", createGenericCodeRules$default), new Pair("kotlin", createGenericCodeRules$default), new Pair("protobuf", createGenericCodeRules$default2), new Pair("proto", createGenericCodeRules$default2), new Pair("pb", createGenericCodeRules$default2), new Pair("py", createGenericCodeRules$default3), new Pair("python", createGenericCodeRules$default3), new Pair("gyp", createGenericCodeRules$default3), new Pair("ipython", createGenericCodeRules$default3), new Pair("rs", createGenericCodeRules$default4), new Pair("rust", createGenericCodeRules$default4), new Pair("cql", g10), new Pair("sql", g10), new Pair("xml", g6), new Pair("http", g6), new Pair("cr", createGenericCodeRules$default5), new Pair("crystal", createGenericCodeRules$default5), new Pair("js", createGenericCodeRules$default6), new Pair("javascript", createGenericCodeRules$default6), new Pair("jsx", createGenericCodeRules$default6), new Pair("mjs", createGenericCodeRules$default6), new Pair("cjs", createGenericCodeRules$default6), new Pair("ts", createGenericCodeRules), new Pair("typescript", createGenericCodeRules), new Pair("tsx", createGenericCodeRules), new Pair("mts", createGenericCodeRules), new Pair("cts", createGenericCodeRules), new Pair("patch", g11), new Pair("diff", g11));
    }

    @NotNull
    public final <R, S> Rule<R, Node<R>, S> createCodeRule(@NotNull final StyleNode.SpanProvider<R> textStyleProvider, @NotNull final Map<String, ? extends List<? extends Rule<R, Node<R>, S>>> languageMap, @NotNull final Function3 wrapperNodeProvider) {
        Intrinsics.checkNotNullParameter(textStyleProvider, "textStyleProvider");
        Intrinsics.checkNotNullParameter(languageMap, "languageMap");
        Intrinsics.checkNotNullParameter(wrapperNodeProvider, "wrapperNodeProvider");
        final Pattern pattern = PATTERN_CODE_BLOCK;
        return new Rule<R, Node<R>, S>(pattern) { // from class: com.discord.simpleast.code.CodeRules$createCodeRule$2
            @Override // com.discord.simpleast.core.parser.Rule
            @NotNull
            public ParseSpec<R, S> parse(@NotNull Matcher matcher, @NotNull Parser<R, ? super Node<R>, S> parser, S state) {
                CodeNode.Content raw;
                Intrinsics.checkNotNullParameter(matcher, "matcher");
                Intrinsics.checkNotNullParameter(parser, "parser");
                String group = matcher.group(1);
                String group2 = matcher.group(3);
                if (group2 == null) {
                    group2 = "";
                }
                String group3 = matcher.group(2);
                boolean E = group3 != null ? StringsKt.E(group3, '\n') : false;
                List<? extends Rule<R, ? extends Object, S>> list = group != null ? (List) languageMap.get(group) : null;
                if (list != null) {
                    List<? super Node<R>> parse = parser.parse(group2, state, list);
                    if (parse == null) {
                        throw new NullPointerException("null cannot be cast to non-null type kotlin.collections.List<com.discord.simpleast.core.node.Node<R>>");
                    }
                    raw = new CodeNode.Content.Parsed(group2, parse);
                } else {
                    raw = new CodeNode.Content.Raw(group2);
                }
                return ParseSpec.INSTANCE.createTerminal((Node) wrapperNodeProvider.invoke(new CodeNode(raw, group, textStyleProvider), Boolean.valueOf(E), state), state);
            }
        };
    }

    @NotNull
    public final <R, S> Rule<R, Node<R>, S> createDefinitionRule(@NotNull final CodeStyleProviders<R> codeStyleProviders, @NotNull final String... identifiers) {
        Intrinsics.checkNotNullParameter(codeStyleProviders, "codeStyleProviders");
        Intrinsics.checkNotNullParameter(identifiers, "identifiers");
        final Pattern compile = Pattern.compile("^\\b(" + x.A(identifiers, "|", null, null, null, 62) + ")(\\s+\\w+)");
        Intrinsics.checkNotNullExpressionValue(compile, "Pattern.compile(\"\"\"^\\b($…String(\"|\")})(\\s+\\w+)\"\"\")");
        return new Rule<R, Node<R>, S>(compile) { // from class: com.discord.simpleast.code.CodeRules$createDefinitionRule$1
            @Override // com.discord.simpleast.core.parser.Rule
            @NotNull
            public ParseSpec<R, S> parse(@NotNull Matcher matcher, @NotNull Parser<R, ? super Node<R>, S> parser, S state) {
                Intrinsics.checkNotNullParameter(matcher, "matcher");
                Intrinsics.checkNotNullParameter(parser, "parser");
                String group = matcher.group(1);
                Intrinsics.checkNotNull(group);
                String group2 = matcher.group(2);
                Intrinsics.checkNotNull(group2);
                return ParseSpec.INSTANCE.createTerminal(new CodeNode.DefinitionNode(group, group2, CodeStyleProviders.this), state);
            }
        };
    }

    @NotNull
    public final <R, S> Rule<R, Node<R>, S> createInlineCodeRule(@NotNull StyleNode.SpanProvider<R> textStyleProvider, @NotNull StyleNode.SpanProvider<R> bgStyleProvider) {
        Intrinsics.checkNotNullParameter(textStyleProvider, "textStyleProvider");
        Intrinsics.checkNotNullParameter(bgStyleProvider, "bgStyleProvider");
        return new CodeRules$createInlineCodeRule$1(this, textStyleProvider, bgStyleProvider, PATTERN_CODE_INLINE);
    }

    public final Pattern createWordPattern$simpleast_core_release(@NotNull String... words) {
        Intrinsics.checkNotNullParameter(words, "words");
        return Pattern.compile("^\\b(?:" + x.A(words, "|", null, null, null, 62) + ")\\b");
    }

    @NotNull
    public final Pattern getPATTERN_CODE_BLOCK() {
        return PATTERN_CODE_BLOCK;
    }

    @NotNull
    public final Pattern getPATTERN_CODE_INLINE() {
        return PATTERN_CODE_INLINE;
    }

    @NotNull
    public final Pattern getPATTERN_LEADING_WS_CONSUMER() {
        return PATTERN_LEADING_WS_CONSUMER;
    }

    @NotNull
    public final Pattern getPATTERN_NUMBERS() {
        return PATTERN_NUMBERS;
    }

    @NotNull
    public final Pattern getPATTERN_TEXT() {
        return PATTERN_TEXT;
    }

    @NotNull
    public final <R, S> Rule<R, Node<R>, S> toMatchGroupRule(@NotNull final Pattern toMatchGroupRule, final int i5, final StyleNode.SpanProvider<R> spanProvider) {
        Intrinsics.checkNotNullParameter(toMatchGroupRule, "$this$toMatchGroupRule");
        return new Rule<R, Node<R>, S>(toMatchGroupRule) { // from class: com.discord.simpleast.code.CodeRules$toMatchGroupRule$1
            @Override // com.discord.simpleast.core.parser.Rule
            @NotNull
            public ParseSpec<R, S> parse(@NotNull Matcher matcher, @NotNull Parser<R, ? super Node<R>, S> parser, S state) {
                Intrinsics.checkNotNullParameter(matcher, "matcher");
                Intrinsics.checkNotNullParameter(parser, "parser");
                String group = matcher.group(i5);
                if (group == null) {
                    group = "";
                }
                StyleNode.SpanProvider spanProvider2 = spanProvider;
                return ParseSpec.INSTANCE.createTerminal(spanProvider2 != null ? new StyleNode.TextStyledNode<>(group, spanProvider2) : new TextNode<>(group), state);
            }
        };
    }
}
