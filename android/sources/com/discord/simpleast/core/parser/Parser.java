package com.discord.simpleast.core.parser;

import android.util.Log;
import com.discord.simpleast.core.node.Node;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Iterator;
import java.util.List;
import java.util.Stack;
import java.util.regex.Matcher;
import kotlin.Metadata;
import kotlin.Pair;
import kotlin.collections.CollectionsKt;
import kotlin.collections.u;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.TypeIntrinsics;
import org.jetbrains.annotations.NotNull;

@Metadata(bv = {1, 0, 3}, d1 = {"\u0000P\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0010\u0011\n\u0000\n\u0002\u0010\u001e\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0010\r\n\u0002\b\u0002\n\u0002\u0010!\n\u0000\n\u0002\u0010 \n\u0002\b\u0004\b\u0016\u0018\u0000 \u001d*\u0004\b\u0000\u0010\u0001*\u000e\b\u0001\u0010\u0002*\b\u0012\u0004\u0012\u0002H\u00010\u0003*\u0004\b\u0002\u0010\u00042\u00020\u0005:\u0002\u001d\u001eB\u0011\b\u0007\u0012\b\b\u0002\u0010\u0006\u001a\u00020\u0007¢\u0006\u0002\u0010\bJ4\u0010\f\u001a\u0014\u0012\u0004\u0012\u00028\u0000\u0012\u0004\u0012\u00028\u0001\u0012\u0004\u0012\u00028\u00020\u00002\u001a\u0010\r\u001a\u0016\u0012\u0004\u0012\u00028\u0000\u0012\u0006\b\u0001\u0012\u00028\u0001\u0012\u0004\u0012\u00028\u00020\u000bJY\u0010\u000e\u001a\u0014\u0012\u0004\u0012\u00028\u0000\u0012\u0004\u0012\u00028\u0001\u0012\u0004\u0012\u00028\u00020\u00002:\u0010\u000f\u001a\u001e\u0012\u001a\b\u0001\u0012\u0016\u0012\u0004\u0012\u00028\u0000\u0012\u0006\b\u0001\u0012\u00028\u0001\u0012\u0004\u0012\u00028\u00020\u000b0\u0010\"\u0016\u0012\u0004\u0012\u00028\u0000\u0012\u0006\b\u0001\u0012\u00028\u0001\u0012\u0004\u0012\u00028\u00020\u000b¢\u0006\u0002\u0010\u0011J:\u0010\u000e\u001a\u0014\u0012\u0004\u0012\u00028\u0000\u0012\u0004\u0012\u00028\u0001\u0012\u0004\u0012\u00028\u00020\u00002 \u0010\u000f\u001a\u001c\u0012\u0018\u0012\u0016\u0012\u0004\u0012\u00028\u0000\u0012\u0006\b\u0001\u0012\u00028\u0001\u0012\u0004\u0012\u00028\u00020\u000b0\u0012JF\u0010\u0013\u001a\u00020\u0014\"\u0004\b\u0003\u0010\u0001\"\u000e\b\u0004\u0010\u0002*\b\u0012\u0004\u0012\u0002H\u00010\u0003\"\u0004\b\u0005\u0010\u00042\u0018\u0010\r\u001a\u0014\u0012\u0004\u0012\u0002H\u0001\u0012\u0004\u0012\u0002H\u0002\u0012\u0004\u0012\u0002H\u00040\u000b2\u0006\u0010\u0015\u001a\u00020\u0016H\u0002JF\u0010\u0017\u001a\u00020\u0014\"\u0004\b\u0003\u0010\u0001\"\u000e\b\u0004\u0010\u0002*\b\u0012\u0004\u0012\u0002H\u00010\u0003\"\u0004\b\u0005\u0010\u00042\u0018\u0010\r\u001a\u0014\u0012\u0004\u0012\u0002H\u0001\u0012\u0004\u0012\u0002H\u0002\u0012\u0004\u0012\u0002H\u00040\u000b2\u0006\u0010\u0015\u001a\u00020\u0016H\u0002JG\u0010\u0018\u001a\b\u0012\u0004\u0012\u00028\u00010\u00192\u0006\u0010\u0015\u001a\u00020\u00162\u0006\u0010\u001a\u001a\u00028\u00022\"\b\u0002\u0010\t\u001a\u001c\u0012\u0018\u0012\u0016\u0012\u0004\u0012\u00028\u0000\u0012\u0006\b\u0001\u0012\u00028\u0001\u0012\u0004\u0012\u00028\u00020\u000b0\u001bH\u0007¢\u0006\u0002\u0010\u001cR\u000e\u0010\u0006\u001a\u00020\u0007X\u0082\u0004¢\u0006\u0002\n\u0000R(\u0010\t\u001a\u001c\u0012\u0018\u0012\u0016\u0012\u0004\u0012\u00028\u0000\u0012\u0006\b\u0001\u0012\u00028\u0001\u0012\u0004\u0012\u00028\u00020\u000b0\nX\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u001f"}, d2 = {"Lcom/discord/simpleast/core/parser/Parser;", "R", "T", "Lcom/discord/simpleast/core/node/Node;", "S", "", "enableDebugging", "", "(Z)V", "rules", "Ljava/util/ArrayList;", "Lcom/discord/simpleast/core/parser/Rule;", "addRule", "rule", "addRules", "newRules", "", "([Lcom/discord/simpleast/core/parser/Rule;)Lcom/discord/simpleast/core/parser/Parser;", "", "logMatch", "", "source", "", "logMiss", "parse", "", "initialState", "", "(Ljava/lang/CharSequence;Ljava/lang/Object;Ljava/util/List;)Ljava/util/List;", "Companion", "ParseException", "simpleast-core_release"}, k = 1, mv = {1, 4, 0})
/* loaded from: classes.dex */
public class Parser<R, T extends Node<R>, S> {
    private static final String TAG = "Parser";
    private final boolean enableDebugging;
    private final ArrayList<Rule<R, ? extends T, S>> rules;

    @Metadata(bv = {1, 0, 3}, d1 = {"\u0000\"\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\r\n\u0000\n\u0002\u0010\u0003\n\u0002\b\u0002\u0018\u00002\u00060\u0001j\u0002`\u0002B#\u0012\u0006\u0010\u0003\u001a\u00020\u0004\u0012\b\u0010\u0005\u001a\u0004\u0018\u00010\u0006\u0012\n\b\u0002\u0010\u0007\u001a\u0004\u0018\u00010\b¢\u0006\u0002\u0010\t¨\u0006\n"}, d2 = {"Lcom/discord/simpleast/core/parser/Parser$ParseException;", "Ljava/lang/RuntimeException;", "Lkotlin/RuntimeException;", "message", "", "source", "", "cause", "", "(Ljava/lang/String;Ljava/lang/CharSequence;Ljava/lang/Throwable;)V", "simpleast-core_release"}, k = 1, mv = {1, 4, 0})
    public static final class ParseException extends RuntimeException {
        public /* synthetic */ ParseException(String str, CharSequence charSequence, Throwable th2, int i5, DefaultConstructorMarker defaultConstructorMarker) {
            this(str, charSequence, (i5 & 4) != 0 ? null : th2);
        }

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        public ParseException(@NotNull String message, CharSequence charSequence, Throwable th2) {
            super("Error while parsing: " + message + " \n Source: " + charSequence, th2);
            Intrinsics.checkNotNullParameter(message, "message");
        }
    }

    public Parser() {
        this(false, 1, null);
    }

    private final <R, T extends Node<R>, S> void logMatch(Rule<R, T, S> rule, CharSequence source) {
        if (this.enableDebugging) {
            Log.i(TAG, "MATCH: with rule with pattern: " + rule.getMatcher().pattern().toString() + " to source: " + source);
        }
    }

    private final <R, T extends Node<R>, S> void logMiss(Rule<R, T, S> rule, CharSequence source) {
        if (this.enableDebugging) {
            Log.i(TAG, "MISS: with rule with pattern: " + rule.getMatcher().pattern().toString() + " to source: " + source);
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    public static /* synthetic */ List parse$default(Parser parser, CharSequence charSequence, Object obj, List list, int i5, Object obj2) {
        if (obj2 != null) {
            throw new UnsupportedOperationException("Super calls with default arguments not supported in this target, function: parse");
        }
        if ((i5 & 4) != 0) {
            list = parser.rules;
        }
        return parser.parse(charSequence, obj, list);
    }

    @NotNull
    public final Parser<R, T, S> addRule(@NotNull Rule<R, ? extends T, S> rule) {
        Intrinsics.checkNotNullParameter(rule, "rule");
        this.rules.add(rule);
        return this;
    }

    @NotNull
    public final Parser<R, T, S> addRules(@NotNull Rule<R, ? extends T, S>... newRules) {
        Intrinsics.checkNotNullParameter(newRules, "newRules");
        return addRules(u.b(newRules));
    }

    @NotNull
    public final List<T> parse(@NotNull CharSequence charSequence, S s2) {
        return parse$default(this, charSequence, s2, null, 4, null);
    }

    public Parser(boolean z5) {
        this.enableDebugging = z5;
        this.rules = new ArrayList<>();
    }

    @NotNull
    public final Parser<R, T, S> addRules(@NotNull Collection<? extends Rule<R, ? extends T, S>> newRules) {
        Intrinsics.checkNotNullParameter(newRules, "newRules");
        this.rules.addAll(newRules);
        return this;
    }

    /* JADX WARN: Multi-variable type inference failed */
    @NotNull
    public final List<T> parse(@NotNull CharSequence source, S initialState, @NotNull List<? extends Rule<R, ? extends T, S>> rules) {
        Pair pair;
        Intrinsics.checkNotNullParameter(source, "source");
        Intrinsics.checkNotNullParameter(rules, "rules");
        Stack stack = new Stack();
        Node node = new Node(null, 1, null);
        if (source.length() > 0) {
            stack.add(new ParseSpec(node, initialState, 0, source.length()));
        }
        String str = null;
        while (!stack.isEmpty()) {
            ParseSpec parseSpec = (ParseSpec) stack.pop();
            if (parseSpec.getStartIndex() >= parseSpec.getEndIndex()) {
                break;
            }
            CharSequence subSequence = source.subSequence(parseSpec.getStartIndex(), parseSpec.getEndIndex());
            int startIndex = parseSpec.getStartIndex();
            Iterator<? extends Rule<R, ? extends T, S>> it = rules.iterator();
            while (true) {
                if (!it.hasNext()) {
                    pair = null;
                    break;
                }
                Rule<R, ? extends T, S> next = it.next();
                Matcher match = next.match(subSequence, str, parseSpec.getState());
                if (match == null) {
                    logMiss(next, subSequence);
                    pair = null;
                } else {
                    logMatch(next, subSequence);
                    pair = new Pair(next, match);
                }
                if (pair != null) {
                    break;
                }
            }
            if (pair == null) {
                throw new ParseException("failed to find rule to match source", source, null, 4, null);
            }
            Rule rule = (Rule) pair.f13474d;
            Matcher matcher = (Matcher) pair.f13475e;
            int end = matcher.end() + startIndex;
            ParseSpec parse = rule.parse(matcher, this, parseSpec.getState());
            Node<R> root = parseSpec.getRoot();
            root.addChild(parse.getRoot());
            if (end != parseSpec.getEndIndex()) {
                stack.push(ParseSpec.INSTANCE.createNonterminal(root, parseSpec.getState(), end, parseSpec.getEndIndex()));
            }
            if (!parse.getIsTerminal()) {
                parse.applyOffset(startIndex);
                stack.push(parse);
            }
            try {
                str = matcher.group(0);
            } catch (Throwable th2) {
                throw new ParseException("matcher found no matches", source, th2);
            }
        }
        Collection<Node<R>> children = node.getChildren();
        ArrayList j02 = children != null ? CollectionsKt.j0(children) : null;
        ArrayList arrayList = TypeIntrinsics.isMutableList(j02) ? j02 : null;
        return arrayList != null ? arrayList : new ArrayList();
    }

    public /* synthetic */ Parser(boolean z5, int i5, DefaultConstructorMarker defaultConstructorMarker) {
        this((i5 & 1) != 0 ? false : z5);
    }
}
